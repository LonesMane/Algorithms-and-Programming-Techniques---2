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
    Cliente milko, *ptr;

    //Posicionando o ponteiro//
    ptr = &milko;
    
    //Inserindo dados com operador '->'//
    strcpy(ptr->nome, "Milko");
    ptr->idade = 19;
    strcpy(ptr->endereco, "Rua dos Bobos");

    //Imprimindo dados com operador '->'//
    printf("\n=== Cliente ===\n");
    printf("Nome: %s\n", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("Endereco: %s\n", ptr->endereco);

    return 0;
}