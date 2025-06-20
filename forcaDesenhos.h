#include "daDicas.h"
#include "instrucoes.h"
#include <stdio.h>
#include <stdlib.h>

void desenhos(int qualDesenho, int dica, int ganhou, palavra teste, char* codificado){

printf("\n\n\n\n\n\n");

if (ganhou==1){
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
    printf(" |               A palavra chave era '%s' !                                              \n", teste.chave);
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    printf(" |                                                                                       \n");
    return;
    }

else{
    if (qualDesenho==1){
        printf(" __________________________           %s  \n", instrucoes(1));
        printf(" |                        |           %s  \n", instrucoes(2));
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
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf(" |                                        \n");
        printf("                                          \n");
    }

    if (qualDesenho==2){
        printf(" __________________________           %s  \n", instrucoes(1));
        printf(" |                        |           %s  \n", instrucoes(2));
        printf(" |                      ******            \n");
        printf(" |                    *        *          \n");
        printf(" |                  *            *        \n");
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

    if (qualDesenho==3){
        printf(" __________________________           %s  \n", instrucoes(1));
        printf(" |                        |           %s  \n", instrucoes(2));
        printf(" |                      ******            \n");
        printf(" |                    *        *          \n");
        printf(" |                  *            *        \n");
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

    if (qualDesenho==4){
        printf(" __________________________           %s  \n", instrucoes(1));
        printf(" |                        |           %s  \n", instrucoes(2));
        printf(" |                      ******            \n");
        printf(" |                    *        *          \n");
        printf(" |                  *            *        \n");
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

    if (qualDesenho==5){
        printf(" __________________________           %s  \n", instrucoes(1));
        printf(" |                        |           %s  \n", instrucoes(2));
        printf(" |                      ******            \n");
        printf(" |                    *        *          \n");
        printf(" |                  *            *        \n");
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

    if (qualDesenho==6){
        printf(" __________________________           %s  \n", instrucoes(1));
        printf(" |                        |           %s  \n", instrucoes(2));
        printf(" |                      ******            \n");
        printf(" |                    *        *          \n");
        printf(" |                  *            *        \n");
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

    if ((qualDesenho!=7) && (dica==1))
        daDica(teste);

    if (qualDesenho!=7){
        printf("%s\n", codificado);
        return;};

    if (qualDesenho==7){
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
        printf(" |                        **               a palavra chave era '%s'                         \n", teste.chave);
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

