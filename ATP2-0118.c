#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define MAX 10

int main()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(0));

    int array[MAX],
        *ptr,
        soma = 0,
        i;

    //Inserindo o endere�o inicial do array no ponteiro//
    ptr = array;

    //Guardando n�meros aleat�rios em cada �ndice do array//
    for(i = 0;i < MAX;i++)
        *(ptr + i) = 1 + rand() % 10;

    //imprimindo a array//
    printf("Array:\n");
    for(i = 0;i < MAX;i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    //somando os valores dos �ndices num variavel soma//
    for(i = 0;i< MAX;i++)
        soma += *(ptr + i);

    //imprimindo o valor da soma//
    printf("\nA soma dos �ndices da array � igual a: %d", soma);

    return 0;
}

