#include<stdio.h>
#include<stdlib.h>

#define QTDVALORES 6

int main()
{
    int i;
    float array[QTDVALORES],
        media,
        soma = 0;

    printf("insira %d valores:\n", QTDVALORES);
    for(i = 0;i < QTDVALORES;i++)
        scanf("%f", &array[i]);

    array[i] = '\0';

    for(i = 0;i < QTDVALORES;i++)
        soma = soma + array[i];

    media = soma / QTDVALORES;

    printf("\nA media dos valores na array eh: %.2f", media);
}

