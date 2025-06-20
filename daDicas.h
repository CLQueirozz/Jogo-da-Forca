#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void daDica(palavra resposta){

    char* dica;
    dica = (char*)calloc(150, sizeof(char));

    strcpy(dica, resposta.dica);

    printf(">>> DICA: %s <<<\n", dica); }
