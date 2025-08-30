//Escreva um programa em C que verifique se uma matriz 3x3 e uma matriz esparsa (maioria dos elementos s ̃ao zeros).//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3

int main()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int zeros = 0;
    int i,
        j;
    
    //Inserindo valores aleatórios em cada elemento da matriz (somente 1 e 0 pelo tipo de exercicio)//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            matriz[i][j] = rand() % 2;
    
    //Imprimindo a matriz gerada//
    printf("Matriz:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
            printf("%d ", matriz[i][j]);
    }

    //Passeando pela matriz contando quantos 0 há na matriz//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            zeros = matriz[i][j] == 0? zeros+1:zeros;
    
    //Imprimindo os resultados//
    if (zeros > ((LINHAS * COLUNAS) / 2))
        printf("\n\nEh uma matriz esparca");
    else
        printf("\n\nNao eh uma matriz esparca");
    
    return 0;
}