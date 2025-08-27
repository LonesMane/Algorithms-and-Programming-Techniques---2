#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 4
#define COLUNAS 4
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        matriz_rot[LINHAS][COLUNAS];

    int i,
        j;

    //Guardar numeros aleatorios em cada espaço da matriz usando for que altera a coluna e a linha//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = rand() % 11;
            }
    }

    //imprimindo cada elemento da matriz//
    printf("A matriz eh:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    // definindo os elementos da matriz rotacionada//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz_rot[i][j] = matriz[LINHAS-1-j][i];
            }
    }

    //imprimindo cada elemento da matriz rotacionada//
    printf("\n\nA matriz rotacionada eh:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_rot[i][j]);
        }
    }
    return 0;
}
