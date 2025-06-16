#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void daDica(palavra teste){

    char* dica;
    dica = (char*)calloc(150, sizeof(char));

    strcpy(dica, teste.dica);

    printf(">>> DICA: %s <<<\n", dica); }
