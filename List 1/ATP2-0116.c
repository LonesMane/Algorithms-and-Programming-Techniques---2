#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define MAX 10

int main()
{
    srand(time(0));

    char array[MAX];
    int i,
        teste_uppercase,
        uppercase = 0;
    char *ptr;

    ptr = array;

    for(i = 0; i < MAX; i++)
    {
        array[i] = 'a' + i;
        teste_uppercase = rand() % 2;
        if (teste_uppercase == 1)
            array[i] = array[i] - 32;
    }

    printf("A array eh:\n");
    for(i = 0; i < MAX; i++)
        printf("%c ", array[i]);
    
    for(i = 0;i < MAX;i++)
        if (('A' <= *(ptr + i)) && (*(ptr + i) <= 'Z'))
            uppercase++;

    printf("\nExistem nela, %d letras maiusculas", uppercase);
    
    return 0;
}