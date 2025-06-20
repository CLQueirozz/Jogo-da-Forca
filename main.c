#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "leArquivo.h"
#include "verificaLetra.h"
#include "forcaDesenhos.h"

int main(){
    int categoria;

    printf("Escolha uma categoria:\n");
    printf("1-Personagens\n");
    printf("2-Alimentos\n");
    printf("3-Paises\n");
    printf("4-Computa��o\n");
    printf("5-Animais\n");
    printf("6-Profiss�es\n");

    scanf("%d", &categoria);

    //palavra � o struct q cont�m a resposta, o n�mero de caracteres da resposta e uma dica
    //esse struct est� declarado em leArquivo.h
        palavra gabarito=devolveStruct(leArq(categoria));

    //codificado � a string omitida da resposta. Por exemplo, se a resposta fosse computador, o
    //codificado seria ##########. A medida que o usu�rio for acertandoo letras, n�s trocamos os
    //'#' pela letra correta
        char* codificado=inicializaVetor(gabarito.num, gabarito.chave);

    char letra; //armazena o chute do usu�rio

    int qualDesenho=1;   //par�metro de qual desenho tem que ser feito
    int dica=0;          //par�metro de se o usu�rio pediu uma dica
    int ganhou=0;        //par�metro de se o usu�rio ganhou ou n�o

    int quit=1;           //par�metro de se o usu�rio deu quit

    while(quit){
        //roda a tela de desenhos
            desenhos(qualDesenho, dica, ganhou, gabarito, codificado);

        //pega o chute do usu�rio
            scanf(" %c", &letra);
            letra = tolower(letra);

        //esse � o c�digo para quitar o jogo
            if (letra=='*'){
                free(codificado);
                quit=0;
                continue; //obviamente, n�o � pra testar se * faz parte da palavra
            }

        //esse � o c�digo para dar dica
            if (letra=='@'){
                dica=1;
                continue; //obviamente, n�o � pra testar se @ faz parte da palavra
            }

        //essa fun��o n�o s� muda o codificado, como tamb�m devolve 1 se o usuario errou um chute, e 0 se ele acertou
            if (verificaLetra(letra, gabarito.num, gabarito.chave, codificado))
                qualDesenho++;

        //se n�o tiver mais nenhum #, significa que o usuario acertou a palavra toda, ent�o ele ganhou
            if(strchr(codificado,'#')==NULL){
                ganhou=1;
                desenhos(qualDesenho, dica, ganhou, gabarito, codificado);
                break;}

        //se o qualDesenho chegou a 7, ent�o o usu�rio se esgotou de chutes, ent�o ele perdeu
            if (qualDesenho==7){
                desenhos(qualDesenho, dica, ganhou, gabarito, codificado);
                break;
            }
    }

    free(codificado);
    return 0;
}
