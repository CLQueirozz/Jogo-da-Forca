#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//parametros gráficos
    typedef struct{
        int qualDesenho;        //controle de quantas partes do corpo do bonequinho já estão na forca
        int dica;               //controle de se é pra mostrar dica
        int ganhou;             //controle de se o jogador já venceu
        int categoria;          //qual categoria ada forca vai rodar
        char letra;             //qual letra que o usuário chutou
        char* descartadas;      //lista das letras que não pertencem a palavra
        char* codificado;       //string da resposta da forca "criptografada" com hashtags
    }parametrosDeTela;

//avisos
    char aviso_1[32]= "Categoria escolhida: Personagens";
    char aviso_2[30]= "Categoria escolhida: Alimentos";
    char aviso_3[27]= "Categoria escolhida: Paises";
    char aviso_4[31]= "Categoria escolhida: Computacao";
    char aviso_5[28]= "Categoria escolhida: Animais";
    char aviso_6[31]= "Categoria escolhida: Profissoes";

    char aviso_7[100]= "Letras descartadas: ";
    char aviso_8[31]= "Para pegar uma dica, digite '@'";
    char aviso_9[34]= "Se deseja sair do jogo, digite '*'";

    char* avisos(int i, parametrosDeTela par){

        if (i==1)
            return (aviso_1);

        if (i==2)
            return (aviso_2);

        if (i==3)
            return (aviso_3);

        if (i==4)
            return (aviso_4);

        if (i==5)
            return (aviso_5);

        if (i==6)
            return (aviso_6);

        if (i==7){
            if (par.descartadas[0]!='*'){
                strcpy(aviso_7, "Letras descartadas: ");
                strcat(aviso_7, par.descartadas);
                return (aviso_7);
            }}

        if (i==8)
            return (aviso_8);

         if (i==9)
            return (aviso_9);

        return "";
    }

//desenha na tela
void desenhos(parametrosDeTela par, palavra resposta){
// limpa a tela
#ifdef _WIN32
    system("cls");    // Windows
#else
    system("clear");  // Linux / macOS
#endif
if (par.ganhou==1){
    printf(" __________________________                                                              \n");
    printf(" |                        |                                                              \n");
    printf(" |                                                   *                                   \n");
    printf(" |                                                  * *                                  \n");
    printf(" |             *         *    ***        *****    *******                                \n");
    printf(" |              *       *   *     *     *         *                                      \n");
    printf(" |               *     *   *       *   *          ******                                 \n");
    printf(" |                *   *    *       *   *          *                                      \n");
    printf(" |                 * *      *     *     *         *                                      \n");
    printf(" |                  *         ***        *****    *******                                \n");
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    printf(" |         *        ******   *******   ****    *******     ***       *      *   | | |    \n");
    printf(" |        * *      *         *         *   *      *      *     *     *      *   | | |    \n");
    printf(" |       *   *    *          ******    ****       *     *       *    *      *   | | |    \n");
    printf(" |      *******   *          *         * *        *     *       *    *      *   | | |    \n");
    printf(" |     *       *   *         *         *  *       *      *     *     *      *   | | |    \n");
    printf(" |    *         *   ******   *******   *   *      *        ***        ******    * * *    \n");
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    printf(" |               A palavra chave era '%s' !                                              \n", resposta.chave);
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    return;
    }

else{
    if (par.qualDesenho==1){
        printf(" __________________________           %s  \n", avisos(par.categoria, par));
        printf(" |                        |           %s  \n", avisos(7, par));
        printf(" |                                        \n");
        printf(" |                                    %s  \n", avisos(8, par));
        printf(" |                                    %s  \n", avisos(9, par));
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf("                                          \n");
    }

    if (par.qualDesenho==2){
        printf(" __________________________           %s  \n", avisos(par.categoria, par));
        printf(" |                        |           %s  \n", avisos(7, par));
        printf(" |                      ******            \n");
        printf(" |                    *        *      %s  \n", avisos(8, par));
        printf(" |                  *            *    %s  \n", avisos(9, par));
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                  *            *        \n");
        printf(" |                    *        *          \n");
        printf(" |                      ******            \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf("                                          \n");
    }

    if (par.qualDesenho==3){
        printf(" __________________________           %s  \n", avisos(par.categoria, par));
        printf(" |                        |           %s  \n", avisos(7, par));
        printf(" |                      ******            \n");
        printf(" |                    *        *      %s  \n", avisos(8, par));
        printf(" |                  *            *    %s  \n", avisos(9, par));
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                  *            *        \n");
        printf(" |                    *        *          \n");
        printf(" |                      ******            \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf("                                          \n");
    }

    if (par.qualDesenho==4){
        printf(" __________________________           %s  \n", avisos(par.categoria, par));
        printf(" |                        |           %s  \n", avisos(7, par));
        printf(" |                      ******            \n");
        printf(" |                    *        *      %s  \n", avisos(8, par));
        printf(" |                  *            *    %s  \n", avisos(9, par));
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                  *            *        \n");
        printf(" |                    *        *          \n");
        printf(" |                      ******            \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                       *                \n");
        printf(" |                      *                 \n");
        printf(" |                     *                  \n");
        printf(" |                    *                   \n");
        printf(" |                                        \n");
        printf("                                          \n");
}

    if (par.qualDesenho==5){
        printf(" __________________________           %s  \n", avisos(par.categoria, par));
        printf(" |                        |           %s  \n", avisos(7, par));
        printf(" |                      ******            \n");
        printf(" |                    *        *      %s  \n", avisos(8, par));
        printf(" |                  *            *    %s  \n", avisos(9, par));
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                  *            *        \n");
        printf(" |                    *        *          \n");
        printf(" |                      ******            \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                       *  *             \n");
        printf(" |                      *    *            \n");
        printf(" |                     *      *           \n");
        printf(" |                    *        *          \n");
        printf(" |                                        \n");
        printf("                                          \n");
    }

    if (par.qualDesenho==6){
        printf(" __________________________           %s  \n", avisos(par.categoria, par));
        printf(" |                        |           %s  \n", avisos(7, par));
        printf(" |                      ******            \n");
        printf(" |                    *        *      %s  \n", avisos(8, par));
        printf(" |                  *            *    %s  \n", avisos(9, par));
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                 *              *       \n");
        printf(" |                  *            *        \n");
        printf(" |                    *        *          \n");
        printf(" |                      ******            \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                       ***              \n");
        printf(" |                      * **              \n");
        printf(" |                     *  **              \n");
        printf(" |                    *   **              \n");
        printf(" |                        **              \n");
        printf(" |                        **              \n");
        printf(" |                       *  *             \n");
        printf(" |                      *    *            \n");
        printf(" |                     *      *           \n");
        printf(" |                    *        *          \n");
        printf(" |                                        \n");
        printf("                                          \n");
        }

    if ((par.qualDesenho!=7) && (par.dica==1))
        printf(">>> DICA: %s <<<\n", resposta.dica);

    if (par.qualDesenho!=7){
        printf("%s\n", par.codificado);
        return;};

    if (par.qualDesenho==7){
        printf(" __________________________                                                                 \n");
        printf(" |                        |                                                                 \n");
        printf(" |                      ******              ******        *        **     **   ********     \n");
        printf(" |                    *        *           *             * *       * *   * *   *            \n");
        printf(" |                  *            *        *             *   *      *  * *  *   ******       \n");
        printf(" |                 *    X    X    *       *     **     *******     *   *   *   *            \n");
        printf(" |                 *              *        *      *   *       *    *       *   *            \n");
        printf(" |                 *              *         ******   *         *   *       *   ********     \n");
        printf(" |                  *            *                                                          \n");
        printf(" |                    *        *                                                            \n");
        printf(" |                      ******                 ****     *         *   ********   ****       \n");
        printf(" |                        **                 *      *    *       *    *          *   *      \n");
        printf(" |                        **                *        *    *     *     ******     ****       \n");
        printf(" |                       ****               *        *     *   *      *          * *        \n");
        printf(" |                      * ** *               *      *       * *       *          *  *       \n");
        printf(" |                     *  **  *                ****          *        ********   *   *      \n");
        printf(" |                    *   **   *                                                            \n");
        printf(" |                        **               a palavra chave era '%s'                         \n", resposta.chave);
        printf(" |                        **                                                                \n");
        printf(" |                       *  *                                                               \n");
        printf(" |                      *    *                                                              \n");
        printf(" |                     *      *                                                             \n");
        printf(" |                    *        *                                                            \n");
        printf(" |                                                                                          \n");
        printf("                                                                                            \n");
        }
    }
}

