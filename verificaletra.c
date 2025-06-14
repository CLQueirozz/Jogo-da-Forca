#include <stdio.h>
#include<stdlib.h>

void zeraVetor(int n, int v[n]){
int i;
    for(i=0; i<n; i++){
            v[i]=0;}
}

void inicializaVetor(int n, char codificado[n], char chave[n], char x){
int i;
    for(i=0; i<n; i++){
            if (chave[i]!=' ')
                codificado[i]=x;
            else
                codificado[i]=' ';
    }
}

void verificaLetra(char c, int num, char chave[num], char codificado[num]){
    int posicao[num];

    zeraVetor(num, posicao);
    int i;

    for(i=0; i<num; i++){
            if(c==chave[i]){
                posicao[i]=1;}}

     for(i=0; i<num; i++){
            if (posicao[i]==1 && codificado[i]=='#')
                codificado[i]=c;}
}
