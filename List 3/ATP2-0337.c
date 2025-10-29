#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cliente
{
    char nome[30];
    int idade;
    char endereco[30];
} Cliente;

int main()
{
    Cliente milko;

    //Inserindo dados//
    strcpy(milko.nome, "Milko");
    milko.idade = 19;
    strcpy(milko.endereco, "Rua dos bobos");

    //Imprimindo dados//
    printf("\n=== Cliente ===\n");
    printf("Nome: %s\n", milko.nome);
    printf("Idade: %d\n", milko.idade);
    printf("Endereco: %s\n", milko.endereco);

    return 0;
}