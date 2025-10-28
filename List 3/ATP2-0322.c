#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union pessoa
{
    char nome[30];
    int idade;
}Pessoa;

int main()
{
    Pessoa milko;

    //Usando o char//
    strcpy(milko.nome, "Milko");
    printf("%s", milko.nome);
    printf("\n%d\n", milko.idade);

    //Usando o int//
    milko.idade = 19;
    printf("%s", milko.nome);
    printf("\n%d\n", milko.idade);

    return 0;
}