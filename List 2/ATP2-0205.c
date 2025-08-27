#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 2
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        matriz_transposta[COLUNAS][LINHAS];
    int i,
        j;

    //Guardar numeros aleatorios em cada espaço da matriz usando for que altera a coluna e a linha na primeira matriz//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = rand() % 11;
            }
    }

    //imprimindo cada elemento da matriz//
    printf("A primeira matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }


    //Inserindo os elementos da matriz transposta (linhas viram colunas)//
    for(i = 0;i < COLUNAS;i++)
    {
        for(j = 0;j < LINHAS;j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //Imprimindo a matriz transposta//
    printf("\n\nA matriz transposta eh:");
    for(i = 0;i < COLUNAS;i++)
    {
        printf("\n");
        for(j = 0;j < LINHAS;j++)
        {
            printf("%d ", matriz_transposta[i][j]);
        }
    }
    return 0;
}


