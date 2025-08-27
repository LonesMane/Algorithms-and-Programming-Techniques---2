#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        matriz_sarrus[LINHAS][COLUNAS+2];
    int diagonal_main = 1,
        diagonal_second = 1,
        determinante = 0;
    int i,
        j,
        k;

    //Guardar numeros aleatorios em cada espa�o da matriz usando for que altera a coluna e a linha//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
                matriz[i][j] = rand() % 10;

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

    //Copiando os valores da matriz para matriz_sarrus//
    //Para os elementos iguais//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < COLUNAS;j++)
                matriz_sarrus[i][j] = matriz[i][j];
    
        //Para as colunas extra//
    for(i = 0;i < LINHAS;i++)
        for(j = 0;j < 2;j++)
                matriz_sarrus[i][j+3] = matriz[i][j];

        //Imprimindo os elementos da Matriz Sarrus//
    printf("\n\nA matriz de Sarrus eh:\n");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS+2;j++)
            printf("%d ", matriz_sarrus[i][j]);
    }

    //Multiplicando os valores para obter as diagonais//
        //Diagonal Principal//
        for(k = 0;k < 3;k++)
        {
            diagonal_main = 1;
            for(i = 0;i < LINHAS;i++)
                diagonal_main *= matriz_sarrus[i][i+k];
            determinante += diagonal_main;
        }    
        
        //Diagonal Secundária//
        for(k = 0;k < 3;k++)
        {
            diagonal_second = 1;
            for(i = 0;i < LINHAS;i++)
                diagonal_second *= matriz_sarrus[i][4 - i - k];
            determinante -= diagonal_second;
        }
    
    //Imprimindo o determinante da Matriz//
    printf("\n\nO Determinante da matriz eh: %d", determinante);

    return 0;
}