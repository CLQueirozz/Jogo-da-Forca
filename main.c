#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "leArquivo.h"
#include "verificaLetra.h"
#include "interfacegrafica.h"

int main(){

    //esse é o struct que guarda informações importantes para as telas de forca
    //está declarado em interfacegrafica.h
        parametrosDeTela par;

    printf("Escolha uma categoria:\n");
    printf("1-Personagens\n");
    printf("2-Alimentos\n");
    printf("3-Paises\n");
    printf("4-Computacao\n");
    printf("5-Animais\n");
    printf("6-Profissoes\n");

    scanf("%d", &par.categoria);

    //palavra é o struct q contém a resposta, o número de caracteres da resposta e uma dica
    //esse struct está declarado em leArquivo.h
        palavra gabarito=leArq(par.categoria);

    //codificado é a string omitida da resposta.

        //Exemplos:
        //resposta da forca= "computador", codificado= "##########"
        //resposta da forca= "limoeiro", codificado= "########"
        //resposta da forca= "agua viva", codificado= "#### ####"

    //À medida que o usuário for acertandoo letras, nós trocamos os '#' pela letra correta

        par.codificado= (char*)calloc(gabarito.num, sizeof(char));
        par.codificado= inicializaVetor(gabarito.num, gabarito.chave);


    //descartadas é a lista, com vírgulas, das letras que não pertencem à resposta da forca
        par.descartadas= (char*)calloc(80, sizeof(char));
        par.descartadas[0]='*'; //isso é só um controle para não aparecer a lista na tela até que o usuário realmente erre uma letra

    par.letra='0';       //armazena o chute do usuário
    par.qualDesenho=1;   //parâmetro de qual desenho tem que ser feito
    par.dica=0;          //parâmetro de se o usuário pediu uma dica
    par.ganhou=0;        //parâmetro de se o usuário ganhou ou não

    int quit=1;          //parãmetro de se o usuário deu quit

    while(quit){
        //roda a tela de desenhos
            desenhos(par, gabarito);

        //pega o chute do usuário
            scanf(" %c", &par.letra);
            par.letra = tolower(par.letra);

        //esse é o código para quitar o jogo
            if (par.letra=='*'){
                quit=0;
                continue; //obviamente, não é pra testar se * faz parte da palavra
            }

        //esse é o código para dar dica
            if (par.letra=='@'){
                par.dica=1;
                continue; //obviamente, não é pra testar se @ faz parte da palavra
            }

        //essa função não só muda o codificado, atualiza a lista de descartados, como também devolve 1 se o usuario errou um chute, e 0 se ele acertou
            if (verificaLetra(par.letra, gabarito.num, gabarito.chave, par.codificado, par.descartadas))
                par.qualDesenho++;

        //se não tiver mais nenhum #, significa que o usuario acertou a palavra toda, então ele ganhou
            if(strchr(par.codificado,'#')==NULL){
                par.ganhou=1;
                desenhos(par, gabarito);
                break;}

        //se o qualDesenho chegou a 7, então o usuário se esgotou de chutes, então ele perdeu
            if (par.qualDesenho==7){
                desenhos(par, gabarito);
                break;
            }
    }

    free(gabarito.chave);
    free(gabarito.dica);
    free(par.codificado);
    free(par.descartadas);
    return 0;
}
