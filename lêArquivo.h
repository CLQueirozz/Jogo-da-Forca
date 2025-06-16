#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

char* leArq(int categoria) {
    FILE*arquivo;
    int numlin;
    int num=1;
    char linha[100];

    srand(time(NULL));
    numlin=rand() %100;

    switch(categoria){
        case 1:
        arquivo=fopen("personagens.csv","r");
        break;

        case 2:
        arquivo=fopen("alimentos.csv","r");
        break;

        case 3:
        arquivo=fopen("paises.csv","r");
        break;

        case 4:
        arquivo=fopen("computacao.csv","r");
        break;

        case 5:
        arquivo=fopen("animais.csv","r");
        break;

        case 6:
        arquivo=fopen("profissoes.csv","r");
        break;}

        if (arquivo == NULL){
            printf("Erro ao abrir o arquivo.\n");
            return 0; }

    while(fgets(linha, sizeof(linha), arquivo) != NULL){
        if (num == numlin)
            return strdup(linha);

        num++;}

    fclose(arquivo);
    return NULL;}

typedef struct{
    char* chave;
    int num;
    char* dica;
    }palavra;

palavra devolveStruct(char* linha){
    char* token;

    palavra resposta;

    resposta.chave= (char*)calloc(150, sizeof(char));
    resposta.dica= (char*)calloc(150, sizeof(char));

    token= strtok(linha, ",");
    strcpy (resposta.chave, token);

    token= strtok(NULL, ",");
    resposta.num = atoi(token);

    token= strtok(NULL, ",");
    strcpy (resposta.dica, token);

    return resposta;}
