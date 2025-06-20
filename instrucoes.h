#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char instrucao_1[31]= "Para pegar uma dica, digite '@'";
char instrucao_2[34]= "Se deseja sair do jogo, digite '*'";

char* instrucoes(int i){

    if (i==1)
        return (instrucao_1);

    if (i==2)
        return (instrucao_2);

    return "";
}


