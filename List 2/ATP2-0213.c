#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int teste_diagonal,
        i,
        j;

    //Guardar numeros cada espaco da matriz usando for que altera a coluna e a linha//
    printf("Insira os elementos da matriz\n");
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                printf("Matriz[%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
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

    //Passeando pela Matriz, verificando se a matriz é diagonal (todo elemento fora da diagonal principal é igual a 0)//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                if ((i != j) && matriz[i][j] != 0)
                    {
                        teste_diagonal = 1;
                        break;
                    }
            }
    }

    //Imprimindo o resultado dos testes//
    if (teste_diagonal == 1)
        printf("\n\nA matriz nao eh diagonal");
    else
        printf("\n\nA matriz eh diagonal");
    return 0;
}