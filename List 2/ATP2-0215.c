#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        linha_aux[COLUNAS];
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
    
    //trocando a ordem das linhas//
    for(i = 0;i < LINHAS/2;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                linha_aux[j] = matriz[i][j];
                matriz[i][j] = matriz[LINHAS-i-1][j];
                matriz[LINHAS-i-1][j] = linha_aux[j];
            }
    }

    //imprimindo cada elemento da matriz modificada//
    printf("\n\nA matriz invertida eh:\n");
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