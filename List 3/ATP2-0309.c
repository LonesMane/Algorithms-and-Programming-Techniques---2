#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[30];
    int idade;
    int altura;
};

int main()
{
    struct pessoa pessoa1;

    //Atribuindo valores//
    strcpy(pessoa1.nome, "Milko");
    pessoa1.idade = 19;
    pessoa1.altura = 1.85;

    int tamanho = sizeof(pessoa1);

    printf("Tamanho da estrutura pessoa: %d bytes\n", tamanho);

    return 0;
}