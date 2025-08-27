#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 20

int main()
{
    int array[MAX],
        i;

    srand(time(NULL));

    for(i = 0;i < MAX;i++)
        array[i] = rand() % 100;

    array[i] = '\0';

    for(i = 0;i < MAX;i++)
        printf("%i\n", array[i]);

}
