#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define MAX 7

int main()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(0));

    int array[MAX],
        i,
        *ptr,
        soma = 0;

    ptr = array;

    for(i = 0;i < MAX;i++)
        *(ptr + i) = 1 + rand() % 100;

    for(i = 0;i < MAX;i++)
        soma = soma + *(ptr + i);

    printf("A soma dos elementos do array:\n");
    for(i = 0;i < MAX;i++)
        printf("%d ", array[i]);
    printf("\n\n");
    printf("É igual a: %d", soma);
}
