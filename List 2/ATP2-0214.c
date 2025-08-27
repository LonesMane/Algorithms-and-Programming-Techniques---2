#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        matriz_copia[LINHAS][COLUNAS];
    int i,
        j;

    //Guardar numeros aleatorios em cada espaco da matriz usando for que altera a coluna e a linha//
    printf("Insira os elementos da matriz\n");
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = rand() % 11;
            }
    }

    //imprimindo cada elemento da matriz//
    printf("A matriz original eh:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    //COPIANDO OS ELEMENTOS DA MATRIZ PARA A MATRIZ COPIA//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz_copia[i][j] = matriz[i][j];
            }
    }

    //imprimindo cada elemento da matriz copia//
    printf("\n\nA matriz copia eh:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_copia[i][j]);
        }
    }
    return 0;
}