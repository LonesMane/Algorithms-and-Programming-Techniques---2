#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3

int main()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        matriz_escalar[LINHAS][COLUNAS],
        matriz_produto[LINHAS][COLUNAS];
    int aux;
    int i,
        j,
        k;
    
    //Inserindo valores aleatórios em cada elemento da matriz//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            matriz[i][j] = rand() % 10;
    
    //Inserindo números na matriz escalar//
    aux = rand() % 11;
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            {
                if (i == j)
                    matriz_escalar[i][j] = aux;
                else
                    matriz_escalar[i][j] = 0;
            }
    
    //Inserindo zeros na matriz produto//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            matriz_produto[i][j] = 0;
    
    //Calculando os elementos da matriz produto//
    for(k = 0;k < LINHAS;k++)
        for(i = 0;i < LINHAS;i++)
            for(j = 0;j < COLUNAS;j++)
                matriz_produto[i][j] += matriz[i][k] * matriz_escalar[k][j];
    
    //Imprimindo a matriz//
    printf("Matriz:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
            printf("%d ", matriz[i][j]);
    }

    //Imprimindo a matriz escalar//
    printf("\n\nMatriz escalar:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
            printf("%d ", matriz_escalar[i][j]);
    }

    //Imprimindo a matriz produto//
    printf("\n\nMatriz produto:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
            printf("%d ", matriz_produto[i][j]);
    }

    return 0;
}