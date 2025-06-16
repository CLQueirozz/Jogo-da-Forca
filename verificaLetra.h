#include <stdio.h>
#include<stdlib.h>

void zeraVetor(int n, int v[n]){
int i;
    for(i=0; i<n; i++){
            v[i]=0;}
}

char* inicializaVetor(int n, char chave[n], char x){
    int i;

    char *codificado;
    codificado= (char*)calloc(n,sizeof(char));

    for(i=0; i<n; i++){
            if (chave[i]!=' ')
                codificado[i]=x;
            else
                codificado[i]=' '; }

    return (codificado);}

int verificaLetra(char c, int num, char chave[num], char codificado[num], char x){
    int posicao[num];
    int d=0;
    int a=0;

    zeraVetor(num, posicao);
    int i;

    for(i=0; i<num; i++){
            if(c==chave[i])
                posicao[i]=1;}

     for(i=0; i<num; i++){
            if (posicao[i]==1 && codificado[i]==x)
                codificado[i]=c;}

    for (i=0; i<num; i++)
        if (posicao[i]==1)
            a++;

    if (a==0)
        d=1;

    return d;}

char fgetsChar(char *c){
    fgets(c, 3, stdin);

    int i=0;

    for (i=0; i<3; i++){
        if (c[i]=='\n')
            c[i]='\0';
        }
    return (c[0]);
}

