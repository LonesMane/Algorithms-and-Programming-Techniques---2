#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 4
#define COLUNAS 4
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
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
    return 0;
}
