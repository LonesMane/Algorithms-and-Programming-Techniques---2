#include<stdio.h>
#include<stdlib.h>

#define QTDVALORES 8

int main()
{
    char string[QTDVALORES];
    int vogais = 0,
        i;

    printf("Insira os caracteres:\n");

    for(i = 0;i < QTDVALORES;i++)
        scanf(" %c", &string[i]);
    for(i = 0;i < QTDVALORES;i++)
    {
        switch (string[i])
        {
        case 'a':
            vogais++;
            break;
        case 'e':
            vogais++;
            break;
        case 'i':
            vogais++;
            break;
        case 'o':
            vogais++;
            break;
        case 'u':
            vogais++;
            break;
        }
    }
    printf("Na string %s, existem %d vogais", string, vogais);
    return 0;
}
