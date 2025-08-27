#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

#define MAX 5

int main()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(0));
    int array[MAX],
        i,
        *ptr;

    //inserindo o endereço do início do array no ponteiro//
    ptr = array;

    //armaenando valores aleatorios no array usando os endereços apontados pelo ponteiro//
    for(i = 0;i < MAX;i++)
        *(ptr + i) = 1 + rand() % 10;

    //imprimindo o array antes de somar 10 em cada índice//
    printf("Array original:\n");
    for(i = 0;i < MAX;i++)
        printf("%d ", *(ptr + i));

    //somando 10 à cada índice do array usando os endereços apontados pelo ponteiro//
    for(i = 0;i < MAX;i++)
        *(ptr + i) = *(ptr + i) + 10;

    //imprimindo os novos valores dos índices após a soma//
    printf("\nArray após soma:\n");
    for(i = 0;i < MAX;i++)
        printf("%d ", *(ptr + i));

    return 0;
}
