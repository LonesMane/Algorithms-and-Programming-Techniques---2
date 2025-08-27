#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz_1[LINHAS][COLUNAS],
        matriz_2[LINHAS][COLUNAS],
        matriz_produto[LINHAS][COLUNAS];
    int i,
        j;

    //Guardar numeros aleatorios em cada espaço da matriz usando for que altera a coluna e a linha na primeira matriz//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz_1[i][j] = rand() % 11;
            }
    }

    //Agora, na segunda matriz//
        for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz_2[i][j] = rand() % 11;
            }
    }

    //imprimindo cada elemento da primeira matriz//
    printf("A primeira matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_1[i][j]);
        }
    }

    //imprimindo cada elemento da segunda matriz//
    printf("\n\nA segunda matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
    }

    //Inserindo os elementos da matriz produto (multiplicando os elementos)//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
        {
            matriz_produto[i][j] = (matriz_1[i][j] * matriz_2[j][i]);
        }
    }

    //Imprimindo a matriz produto//
    printf("\n\nA matriz produto eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_produto[i][j]);
        }
    }
    return 0;
}

