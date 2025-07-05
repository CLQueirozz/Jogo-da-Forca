#include <stdio.h>
#include<stdlib.h>


//essa fun��o inicializa cada objeto de um vetor inteiro como '0'
    void zeraVetor(int n, int v[n]){
        int i;
        for(i=0; i<n; i++)
            v[i]=0;
    }


//essa fun��o recebe o chute do usu�rio e verifica se ele est� presente na resposta
    int verificaLetra(char letra, int num, char reposta[num], char codificado[num], char* descartadas){

        int posicao[num];
        int desenho=0;
        int acertos=0;

    //inicialmente, posicao precisa ser todo 0
        zeraVetor(num, posicao);

    //se a letra chute estiver presente na resposta, a posicao dessa letra vira 1
        for(int i=0; i<num; i++){
            if(letra==reposta[i])
                posicao[i]=1;}

    //se a posicao � 1, e ainda tem o '#' no codificado, aquela posicao do codificado vira a letra correta
    //se existir alguma posicao 1, significa que o usuario acertou, ent�o a gente incrementa o int acertos
        for(int i=0; i<num; i++){
            if (posicao[i]==1){
                acertos++;
                if (codificado[i]=='#')
                    codificado[i]=letra;
            }
        }
    //se n�o houve nenhum acertos...
        int tam;
        if (acertos==0){
            //devolve 1 para que a forca mude
                desenho=1;

            //atualiza a lista de letras erradas
                if(descartadas[0]=='*'){                //para o primeiro erro
                    descartadas[0]=letra;
                }

            else{                                       //para erros subsequentes
                if(strchr(descartadas, letra)==NULL){   //verifica se a letra j� n�o est� na lista para n�o ficar repetitivo
                    tam=strlen(descartadas);
                    descartadas[tam]=',';
                    descartadas[tam+1]=' ';
                    descartadas[tam+2]=letra;
                    descartadas[tam+3]='\0';}
            }
        }

    return desenho;}


