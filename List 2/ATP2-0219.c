#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS1 2
#define COLUNAS1 3
#define LINHAS2 3
#define COLUNAS2 2

int main()
{
    srand(time(0));

    int matriz_1[LINHAS1][COLUNAS1],
        matriz_2[LINHAS2][COLUNAS2],
        matriz_produto[LINHAS1][COLUNAS2];
    int i,
        j,
        k;

    //Inserindo numeros aleatorios nos elementos da primeira matriz//
    for(i = 0;i < LINHAS1;i++)
        for(j = 0;j < COLUNAS1;j++)
            matriz_1[i][j] = 1 + rand() % 11;

    //Inserindo numeros aleatorios nos elementos da segunda matriz//
    for(i = 0;i < LINHAS2;i++)
        for(j = 0;j < COLUNAS2;j++)
            matriz_2[i][j] = 1 + rand() % 11;

    //Inserindo 0 em todos os elementos da matriz produto para permitir a multiplicacao de 1 e 2//
    for(i = 0;i < LINHAS1;i++)
        for(j = 0;j < COLUNAS2;j++)
            matriz_produto[i][j] = 0;

    //Inserindo os elementos da matriz pelo produto das matrizes 1 e 2//
    for(i = 0;i < LINHAS1;i++)
        for(j = 0;j < COLUNAS2;j++)
            for(k = 0;k < LINHAS2;k++)
                matriz_produto[i][j] += matriz_1[i][k] * matriz_2[k][j];

    //Imprimindo a matriz 1//
    printf("A primeira matriz:\n");
    for(i = 0;i < LINHAS1;i++)
        {
            printf("\n");
            for(j = 0;j < COLUNAS1;j++)
                printf("%d ", matriz_1[i][j]);
        }

    //Imprimindo a matriz 2//
    printf("\n\nA segunda matriz:\n");
    for(i = 0;i < LINHAS2;i++)
        {
            printf("\n");
            for(j = 0;j < COLUNAS2;j++)
                printf("%d ", matriz_2[i][j]);
        }

    //Imprimindo a matriz produto//
    printf("\n\nA matriz produto:\n");
    for(i = 0;i < LINHAS1;i++)
        {
            printf("\n");
            for(j = 0;j < COLUNAS2;j++)
                printf("%d ", matriz_produto[i][j]);
        }

        return 0;
}
