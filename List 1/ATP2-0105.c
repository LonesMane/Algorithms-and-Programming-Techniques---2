#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int main()
{
    int array[MAX],
        i;

    printf("insira %d valores:\n", MAX);
    for(i = 0;i < MAX;i++)
        scanf("%d", &array[i]);

    array[i] = '\0';

    printf("\nArray na forma direta:\n ");

    for(i = 0;i < MAX;i++)
        printf("%d ", array[i]);

    printf("\nArray na forma inversa:\n ");

    for(i = (MAX-1);i > -1;i--)
        printf("%d ", array[i]);



}
