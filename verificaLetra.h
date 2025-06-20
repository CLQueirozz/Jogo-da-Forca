#include <stdio.h>
#include<stdlib.h>


//essa função inicializa cada objeto de um vetor inteiro como '0'
    void zeraVetor(int n, int v[n]){
        int i;
        for(i=0; i<n; i++)
            v[i]=0;
    }

//essa função recebe a resposta da forca e devolve uma string compatível porém codificada
    char* inicializaVetor(int n, char chave[n]){
        int i;

        //cria e inicializa o codificado
            char *codificado;
            codificado= (char*)calloc(n,sizeof(char));

        for(i=0; i<n; i++){
            //se não for espaço na resposta, coloca '#' no codificado
                if (chave[i]!=' ')
                    codificado[i]='#';

            //se for espaço na resposta, deixa espaço no codificado
                else
                    codificado[i]=' '; }

        return (codificado);
    }

//essa função recebe o chute do usuário e verifica se ele está presente na resposta
    int verificaLetra(char letra, int num, char reposta[num], char codificado[num]){

        int posicao[num];
        int desenho=0;
        int acertos=0;

    //inicialmente, posicao precisa ser todo 0
        zeraVetor(num, posicao);

    //se a letra chute estiver presente na resposta, a posicao dessa letra vira 1
        for(int i=0; i<num; i++){
            if(letra==reposta[i])
                posicao[i]=1;}

    //se a posicao é 1, e ainda tem o '#' no codificado, aquela posicao do codificado vira a letra correta
    //se existir alguma posicao 1, significa que o usuario acertou, então a gente incrementa o int acertos
        for(int i=0; i<num; i++){
            if (posicao[i]==1){
                acertos++;
                if (codificado[i]=='#')
                    codificado[i]=letra;
            }
        }
    //se não houve nenhum acertos, o desenho da forca vai ter q ser atualizado
        if (acertos==0)
            desenho=1;

    return desenho;}


