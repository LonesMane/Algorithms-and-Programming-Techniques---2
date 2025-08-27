#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 4
#define COLUNAS 3


int main()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int soma = 0;
    int i,
        j;

    //Inserindo numeros aleatorios nos elementos da matriz//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            matriz[i][j] = 1 + rand() % 11;

    //Imprimindo a matriz//
    printf("A matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    //Calculando a soma das colunas da matriz e imprimindo o resultado//
    printf("\n");
    for(j = 0;j < COLUNAS;j++)
    {
        for(i = 0;i < LINHAS;i++)
            soma += matriz[i][j];
        printf("\nSoma da %da coluna: %d", j+1, soma);
        soma = 0;
    }

    return 0;
}
