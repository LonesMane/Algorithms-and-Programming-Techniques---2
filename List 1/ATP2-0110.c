#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

#define MAX 10

int main()
{
    setlocale (LC_ALL, "portuguese");

    float array[MAX],
        soma = 0,
        media;
    int i;

    srand(time(0));

    for(i = 0;i < MAX;i++)
        array[i] = (50 + rand() * 150)/(RAND_MAX + 1);

    for(i = 0;i < MAX;i++)
        soma = soma + array[i];

    media = soma/MAX;

    printf("A média dos valores:\n");
    for(i = 0;i < MAX;i++)
        printf("%.2f\n", array[i]);
    printf("É igual a: %.2f", media);
}
