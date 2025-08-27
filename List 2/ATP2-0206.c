#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 5
#define COLUNAS 5
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int produto = 1,
        i,
        j;

    //Guardar numeros aleatorios em cada espaço da matriz usando for que altera a coluna e a linha na primeira matriz//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = rand() % 11;
            }
    }

    //imprimindo cada elemento da primeira matriz//
    printf("A primeira matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    //passeando pela diagonal principal da matriz multiplicando os elementos//
    for(i = 0; i < COLUNAS;i++)
        produto *= matriz[i][i];

    //Imprimindo o resultado do produto da diagonal principal//
    printf("\n\nA diagonal principal eh igual a:%d ", produto);
    return 0;
}
