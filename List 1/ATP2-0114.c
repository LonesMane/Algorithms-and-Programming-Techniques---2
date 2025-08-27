#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define MAX 5

int main()
{
    setlocale (LC_ALL, "portuguese");

    int array[MAX],
        i,j = 1,
        *ptr;

    for(i = 0;i < MAX;i++)
        array[i] = i+1;

    printf("Array original:\n");
    for(i = 0;i < MAX;i++)
        printf("%d ", array[i]);
    printf("\n\n");

    ptr = array;

    for(i = 0;i < MAX;i++)
        {
            *(ptr + i) = *(ptr + i) - (j * 2);
            j++;
        }

    printf("Array inversa:\n");
    for(i = 0;i < MAX;i++)
        printf("%d ", array[i]);
    printf("\n");
}
