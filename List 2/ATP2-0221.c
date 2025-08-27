#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3


int main()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int soma = 0;
    int teste_linhas,
        teste_colunas,
        i,
        j;

    //Inserindo numeros coletado nos elementos da matriz//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
            {
                printf("Matriz[%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }

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

    //verificando se existe algum elemento que nao seja 0 ou 1//
    if (matriz[i][j] != 0 && matriz[i][j] != 1)
    {
        printf("\nNao eh matriz de permutacao");
        return 0;
    }
    //Verificando se a matriz eh de permutação testando se nao ha mais de um 1 em cada linha e coluna//

    //testando por linhas//
    for(i = 0;i < LINHAS;i++)
    {
        teste_linhas = 0;
        for(j = 0;j < COLUNAS;j++)
            if (matriz[i][j] == 1)
                teste_linhas++;
        if ( teste_linhas != 1)
        {

        }
            printf("\nNao eh matriz de permutacao");
            return 0;
    }

    //testando por colunas//
    for(j = 0;j < COLUNAS;j++)
    {
        teste_colunas = 0;
        for(i = 0;i < LINHAS;i++)
            if (matriz[i][j] == 1)
                teste_colunas++;
        if (teste_colunas != 1)

    }

    //Imprimindo resultado dos testes//
    if (teste_colunas != 1 || teste_linhas != 1)
        printf("\nNao eh matriz de permutacao");
    else
        printf("\nEh matriz de permutacao");

    return 0;
}
