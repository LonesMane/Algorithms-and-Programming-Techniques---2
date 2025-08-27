#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int maior = 0,
        i,
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

    //passeando pela matriz verificando qual eh o maior//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                maior = (matriz[i][j] > maior)? matriz[i][j]:maior;
            }
    }

    //Imprimindo o resultado dos testes//
    printf("\n\nO maior elemento da matriz eh:%d ", maior);
    return 0;
}
