#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 4
#define COLUNAS 4

int main()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        aux;
    int i,
        j,
        k;
    //inserindo numeros aleatorios em cada elemento da matriz//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            matriz[i][j] = 1 + rand() % 11;

    //Imprimindo a matriz original//
    printf("Matriz original:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
            printf("%d ", matriz[i][j]);
    }

    //Ordenando os elementos de cada linha de todas as linhas//
    for(k = 0;k < COLUNAS;k++)
        for(i = 0;i < LINHAS;i++)
            for(j = 0;j < COLUNAS;j++)
                {
                    if ((matriz[i][j] > matriz[i][j+1]) && j < COLUNAS-1)
                    {
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[i][j+1];
                        matriz[i][j+1] = aux;
                    }
                }
    //Imprimindo a matriz ordenada//
    printf("Matriz ordenada:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
            printf("%d ", matriz[i][j]);
    }

    return 0;
}
