#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int menor,
        i,
        j;

    //Guardar numeros aleatorios em cada espaço da matriz usando for que altera a coluna e a linha//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                matriz[i][j] = 1 + rand() % 10;
            }
    }

    //definindo o primeiro elemento da matriz como o menor para poder comparar com os demais//
    menor = matriz[0][0];

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
                menor = (matriz[i][j] < menor)? matriz[i][j]:menor;
            }
    }

    //Imprimindo o resultado dos testes//
    printf("\n\nO menor elemento da matriz eh:%d ", menor);
    return 0;
}
