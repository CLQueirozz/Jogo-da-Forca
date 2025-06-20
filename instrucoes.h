#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char instrucao_1[32]= "Categoria escolhida: Personagens";
char instrucao_2[30]= "Categoria escolhida: Alimentos";
char instrucao_3[27]= "Categoria escolhida: Paises";
char instrucao_4[31]= "Categoria escolhida: Computacao";
char instrucao_5[28]= "Categoria escolhida: Animais";
char instrucao_6[31]= "Categoria escolhida: Profissoes";
char instrucao_7[31]= "Para pegar uma dica, digite '@'";
char instrucao_8[34]= "Se deseja sair do jogo, digite '*'";

char* instrucoes(int i){

    if (i==1)
        return (instrucao_1);

    if (i==2)
        return (instrucao_2);

    if (i==3)
        return (instrucao_3);

    if (i==4)
        return (instrucao_4);

    if (i==5)
        return (instrucao_5);

    if (i==6)
        return (instrucao_6);

    if (i==7)
        return (instrucao_7);

    if (i==8)
        return (instrucao_8);

    return "";
}


