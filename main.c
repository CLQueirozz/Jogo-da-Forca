#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lêArquivo.h"
#include "verificaLetra.h"
#include "forcaDesenhos.h"


int main(){
    int categoria;
    printf("Escolha uma categoria:\n");
    printf("1-Personagens\n");
    printf("2-Alimentos\n");
    printf("3-Paises\n");
    printf("4-Computação\n");
    printf("5-Animais\n");
    printf("6-Profissões\n");

    scanf("%d", &categoria);

    char* frase=leArq(categoria);

    palavra teste = devolveStruct(frase);

    char* codificado= inicializaVetor(teste.num, teste.chave, '#');

    char c;
    int d=0;

    while(1){

        desenhos(d);
        printf("%s\n", codificado);

        scanf(" %c", &c);

        if (c=='*'){
            free (frase);
            free(codificado);
            return 0;
        }

        d=d+verificaLetra(c, teste.num, teste.chave, codificado, '#');

        if (d==6){
            desenhos(d);
            printf("GAME OVER \n");
            free (frase);
            free(codificado);
            return 0;}
        }

    return 0;
}
