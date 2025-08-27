#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

#define MAX 15

int main()
{
    setlocale (LC_ALL, "portuguese");


    int array[MAX],
        maior = 0,
        i;

    srand(time(0));

    for(i = 0;i < MAX;i++)
        array[i] = (int)((double)rand() / (RAND_MAX + 1) * 50 );
    for(i = 0;i < MAX;i++)
        maior = (array[i] > maior)? array[i]:maior;

    printf("Dentre os valores:\n");
    for(i = 0;i< MAX;i++)
        printf("%d\n", array[i]);
    printf("O maior é: %d", maior);
