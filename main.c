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
    printf("4-Computacao\n");
    printf("5-Animais\n");
    printf("6-Profissoes\n");

    scanf("%d", &categoria);

    //palavra é o struct q contém a resposta, o número de caracteres da resposta e uma dica
    //esse struct está declarado em leArquivo.h
        palavra gabarito=devolveStruct(leArq(categoria));

    //codificado é a string omitida da resposta. Por exemplo, se a resposta fosse computador, o
    //codificado seria ##########. A medida que o usuário for acertandoo letras, nós trocamos os
    //'#' pela letra correta
        char* codificado=inicializaVetor(gabarito.num, gabarito.chave);

    char letra; //armazena o chute do usuário

    int qualDesenho=1;   //parâmetro de qual desenho tem que ser feito
    int dica=0;          //parâmetro de se o usuário pediu uma dica
    int ganhou=0;        //parâmetro de se o usuário ganhou ou não

    int quit=1;           //parãmetro de se o usuário deu quit

    while(quit){
        //roda a tela de desenhos
            desenhos(qualDesenho, dica, ganhou, gabarito, codificado, categoria);

        //pega o chute do usuário
            scanf(" %c", &letra);
            letra = tolower(letra);

        //esse é o código para quitar o jogo
            if (letra=='*'){
                quit=0;
                continue; //obviamente, não é pra testar se * faz parte da palavra
            }

        //esse é o código para dar dica
            if (letra=='@'){
                dica=1;
                continue; //obviamente, não é pra testar se @ faz parte da palavra
            }

        //essa função não só muda o codificado, como também devolve 1 se o usuario errou um chute, e 0 se ele acertou
            if (verificaLetra(letra, gabarito.num, gabarito.chave, codificado))
                qualDesenho++;

        //se não tiver mais nenhum #, significa que o usuario acertou a palavra toda, então ele ganhou
            if(strchr(codificado,'#')==NULL){
                ganhou=1;
                desenhos(qualDesenho, dica, ganhou, gabarito, codificado, categoria);
                break;}

        //se o qualDesenho chegou a 7, então o usuário se esgotou de chutes, então ele perdeu
            if (qualDesenho==7){
                desenhos(qualDesenho, dica, ganhou, gabarito, codificado, categoria);
                break;
            }
    }

    free(codificado);
    return 0;
}
