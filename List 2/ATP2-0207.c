#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 3
#define COLUNAS 3
int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS],
        matriz_transposta[COLUNAS][LINHAS];
    int teste_igualdade = 0,
        i,
        j;

    //Guardar numeros em cada espaço da matriz usando for que altera a coluna e a linha na primeira matriz//
    printf("Para a matriz\n");
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                printf("Insira o elemento A%d%d: ",i+1, j+1);
                scanf("%d", &matriz[i][j]);
            }
    }

    //imprimindo cada elemento da primeira matriz//
    printf("A matriz eh:");
    for(i = 0;i < LINHAS;i++)
    {
        printf("\n");
        for(j = 0;j < COLUNAS;j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    //Inserindo os elementos da matriz transposta (linhas viram colunas)//
    for(i = 0;i < COLUNAS;i++)
    {
        for(j = 0;j < LINHAS;j++)
        {
            matriz_transposta[i][j] = matriz[j][i];
        }
    }

    //Imprimindo a matriz transposta//
    printf("\n\nA matriz Transposta eh:");
    for(i = 0;i < COLUNAS;i++)
    {
        printf("\n");
        for(j = 0;j < LINHAS;j++)
        {
            printf("%d ", matriz_transposta[i][j]);
        }
    }

    //Verificando se os elementos das duas matrizes são iguais ou não, portanto, matriz eh simetrica//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                if (matriz[i][j] != matriz_transposta[i][j])
                    teste_igualdade = 1;
            }
    }

    //Imprimindo o resultado dos testes//
    if (teste_igualdade == 1)
        printf("\n\nMatriz nao eh simetrica!");
    else
        printf("\n\nMatriz eh simetrica");
    return 0;
}
