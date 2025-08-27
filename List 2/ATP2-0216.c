#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHAS 5
#define COLUNAS 5

//função para detectar se o numero aleatorio eh primo//
int detectar_primo (int num)
{
    int divisores = 0;

    if (num <= 1)
        return 3;
        
    for(int i = 1;i <= num;i++)
        if (num % i == 0)
            {
                divisores++;
                if (divisores > 2)
                    break;
            }
    return divisores;
}

int main ()
{
    srand(time(0));

    int matriz[LINHAS][COLUNAS];
    int num,
        i,
        j;

    //Guardar numeros primos em cada espaco da matriz usando for que altera a coluna e a linha//
    for(i = 0;i < LINHAS;i++)
    {
        for(j = 0;j < COLUNAS;j++)
            {
                do {
                    num = 1 + rand() % 32;
                } while (detectar_primo(num) > 2);
                matriz[i][j] = num;
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
    return 0;
}