#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union doubleChar
{
    double Double;
    char Char;
} doubleChar;

int main()
{
    doubleChar DB1;

    //Usando o double//
    DB1.Double = 1;
    printf("\nDouble: %lf", DB1.Double);//Valor atribuido//
    printf("\nChar: %c", DB1.Char);//Lixo, pois nao foi atribuido//

    //Usando o Char//
    DB1.Char = 'M';
    printf("\nDouble: %lf", DB1.Double);//Lixo, por nao foi atribuido//
    printf("\nChar: %c", DB1.Char);//Valor Atribuido//

    return 0;
}