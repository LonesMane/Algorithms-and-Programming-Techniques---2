#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 2
#define COLUNAS 4
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int i,
        j;
    float soma = 0,
        media,
        num_elementos = LINHAS * COLUNAS;

    //Guardar numeros aleatorios em cada espa�o da matriz usando for que altera a coluna e a linha//
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

    //somando cada elemento da matriz//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                soma += matriz[i][j];
            }
    }

    //calculando a media dos elementos//
    media = soma / num_elementos;

    //Resultado do calculo//
    printf("\n\nA media dos elementos da matriz eh: %.2f", media);

    return 0;
}