#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int pares = 0,
        i,
        j;

    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = rand() % 11;
            }
    }

    printf("A matriz eh:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    //Passeando pela Matriz, verificando quais são pares e considerando 0 como par//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                pares = (matriz[i][j] % 2 == 0)? pares+1:pares;
            }
    }

    //Imprimindo o resultado dos testes//
    printf("\n\nO menor elemento da matriz eh:%d ", pares);
    return 0;
}