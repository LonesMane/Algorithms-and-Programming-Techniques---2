#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco
{
    char rua[30];
    char cidade[30];
    int numero;
};

typedef struct pessoa
{
    char nome[30];
    struct endereco endereco;
}Pessoa;

int main()
{
    Pessoa fulano;

    //Inserindo valores na estrutura aninhada//
    strcpy(fulano.endereco.rua, "Rua dos Bobos");
    strcpy(fulano.endereco.cidade, "Sildavia");
    fulano.endereco.numero = 0000;

    //Inserindo valores na string comum//
    strcpy(fulano.nome, "Milko");

    //Imprimindo valores//
    printf("%s", fulano.nome);
    printf("\n%s", fulano.endereco.rua);
    printf("\n%s", fulano.endereco.cidade);
    printf("\n%d", fulano.endereco.numero);

    return 0;
}