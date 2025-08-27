#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

#define MAX 12

int main()
{
    setlocale (LC_ALL, "portuguese");

    int array[MAX],
        negativos = 0,
        i;

    srand(time(0));

    for(i = 0;i < MAX;i++)
        array[i] = (int)((-20) + (double)rand()/(RAND_MAX + 1) * 40);

    for(i = 0;i < MAX;i++)
        negativos = (array[i] < 0)? negativos+1:negativos;
    printf("Dentre os valores:\n");
    for(i = 0;i < MAX;i++)
        printf("%d\n", array[i]);
    printf("\n%d são números negativos.", negativos);
}
