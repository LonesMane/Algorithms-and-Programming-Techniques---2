#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 2
#define COLUNAS 2
int main ()
{
    srand(time(0));

    int matriz_1[LINHAS][COLUNAS],
        matriz_2[LINHAS][COLUNAS];
    int teste_igualdade = 0,
        i,
        j;

    //Guardar numeros em cada espaço da matriz usando for que altera a coluna e a linha na primeira matriz//
    printf("Para a primeira matriz\n");
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                printf("Insira o elemento A%d%d: ",i+1, j+1);
                scanf("%d", &matriz_1[i][j]);
            }
    }
    //Agora, na segunda matriz//
    printf("\nPara a segunda Matriz\n");
        for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                printf("Insira o elemento A%d%d: ",i+1, j+1);
                scanf("%d", &matriz_2[i][j]);
            }
    }

    //imprimindo cada elemento da primeira matriz//
    printf("A primeira matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_1[i][j]);
        }
    }

    //imprimindo cada elemento da segunda matriz//
    printf("\n\nA segunda matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
    }

    //Verificando se os elementos das duas matrizes são iguais ou não.
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                if (matriz_1[i][j] != matriz_2[i][j])
                    teste_igualdade = 1;
            }
    }

    //Imprimindo o resultado dos testes//
    if (teste_igualdade == 1)
        printf("\n\nElas sao diferentes!");
    else
        printf("\n\nElas sao iguais");
    return 0;
}
