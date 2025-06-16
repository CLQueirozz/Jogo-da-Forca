#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* instrucoes(int i){

    char* instrucao;
    instrucao= (char*)calloc(50, sizeof(char));

    if (i==1)
        instrucao= "Para pegar uma dica, digite '@'";

    if (i==2)
        instrucao= "Se deseja sair do jogo, digite '*'";

    return (instrucao);
}


