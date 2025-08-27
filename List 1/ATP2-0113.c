#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define MAX 5

int main()
{
    setlocale (LC_ALL, "portuguese");
    srand(time(NULL));

    int array[MAX],
        *ptr,
        i;

    for(i = 0;i < MAX;i++)
        array[i] = 1 + (int)((double)rand()/(RAND_MAX + 1) * 100);

    ptr = &array[0];

    printf("A array é composta por:\n");
    for(i = 0;i < MAX;i++)
        printf("%d\n", *(ptr+i));
}
