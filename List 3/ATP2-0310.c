#include <stdio.h>
#include <string.h>

union valor
{
    int inteiro;
    float flutuante;
};

int main()
{
    union valor numero;

    //Atribuindo o valor usando o inteiro//
    numero.inteiro = 10;
    printf("Valor inteiro: %d\n", numero.inteiro);

    //Atirbuindo o valor usando o flutuante//
    numero.flutuante = 20.5;
    printf("Valor flutuante: %.2f\n", numero.flutuante);

    return 0;
}