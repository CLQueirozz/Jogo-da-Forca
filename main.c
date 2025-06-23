#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "leArquivo.h"
#include "verificaLetra.h"
#include "interfacegrafica.h"

int main(){

    //esse � o struct que guarda informa��es importantes para as telas de forca
    //est� declarado em interfacegrafica.h
        parametrosDeTela par;

    printf("Escolha uma categoria:\n");
    printf("1-Personagens\n");
    printf("2-Alimentos\n");
    printf("3-Paises\n");
    printf("4-Computacao\n");
    printf("5-Animais\n");
    printf("6-Profissoes\n");

    scanf("%d", &par.categoria);

    //palavra � o struct q cont�m a resposta, o n�mero de caracteres da resposta e uma dica
    //esse struct est� declarado em leArquivo.h
        palavra gabarito=leArq(par.categoria);

    //codificado � a string omitida da resposta.

        //Exemplos:
        //resposta da forca= "computador", codificado= "##########"
        //resposta da forca= "limoeiro", codificado= "########"
        //resposta da forca= "agua viva", codificado= "#### ####"

    //� medida que o usu�rio for acertandoo letras, n�s trocamos os '#' pela letra correta

        par.codificado= (char*)calloc(gabarito.num, sizeof(char));
        par.codificado= inicializaVetor(gabarito.num, gabarito.chave);


    //descartadas � a lista, com v�rgulas, das letras que n�o pertencem � resposta da forca
        par.descartadas= (char*)calloc(80, sizeof(char));
        par.descartadas[0]='*'; //isso � s� um controle para n�o aparecer a lista na tela at� que o usu�rio realmente erre uma letra

    par.letra='0';       //armazena o chute do usu�rio
    par.qualDesenho=1;   //par�metro de qual desenho tem que ser feito
    par.dica=0;          //par�metro de se o usu�rio pediu uma dica
    par.ganhou=0;        //par�metro de se o usu�rio ganhou ou n�o

    int quit=1;          //par�metro de se o usu�rio deu quit

    while(quit){
        //roda a tela de desenhos
            desenhos(par, gabarito);

        //pega o chute do usu�rio
            scanf(" %c", &par.letra);
            par.letra = tolower(par.letra);

        //esse � o c�digo para quitar o jogo
            if (par.letra=='*'){
                quit=0;
                continue; //obviamente, n�o � pra testar se * faz parte da palavra
            }

        //esse � o c�digo para dar dica
            if (par.letra=='@'){
                par.dica=1;
                continue; //obviamente, n�o � pra testar se @ faz parte da palavra
            }

        //essa fun��o n�o s� muda o codificado, atualiza a lista de descartados, como tamb�m devolve 1 se o usuario errou um chute, e 0 se ele acertou
            if (verificaLetra(par.letra, gabarito.num, gabarito.chave, par.codificado, par.descartadas))
                par.qualDesenho++;

        //se n�o tiver mais nenhum #, significa que o usuario acertou a palavra toda, ent�o ele ganhou
            if(strchr(par.codificado,'#')==NULL){
                par.ganhou=1;
                desenhos(par, gabarito);
                break;}

        //se o qualDesenho chegou a 7, ent�o o usu�rio se esgotou de chutes, ent�o ele perdeu
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
