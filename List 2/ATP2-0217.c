#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int num_busca,
        i,
        j;

    //Guardar numeros aleatorios em cada espa�o da matriz usando for que altera a coluna e a linha//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = rand() % 101;
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

    //Permitindo que o usuario busque a posicao de um elemento da matriz//
    printf("\n\nInsira qual elemento deseja buscar: ");
    scanf("%d", &num_busca);

    //BUSCANDO O ENDEREÇO DO NUMERO BUSCADO E IMPRIMINDO//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                if (matriz[i][j] == num_busca)
                    printf("\nA localizacao eh: (%d, %d)", i+1, j+1);
            }
    }
    return 0;
}