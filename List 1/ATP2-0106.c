#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int main()
{
    int array[MAX],
        i,
        soma = 0;

    printf("insira %d valores:\n", MAX);
    for(i = 0;i < MAX;i++)
        scanf("%d", &array[i]);

    array[i] = '\0';

    for(i = 0;i < MAX;i++)
        soma = soma + array[i];

    printf("\nA soma dos valores na array eh: %d", soma);
}
