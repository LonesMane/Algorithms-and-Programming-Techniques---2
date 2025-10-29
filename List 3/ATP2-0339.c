#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto
{
    char nome[30], codigo [30];
    float preco;
} Produto;

int main()
{
    Produto produto1, produto2;

    //Inserindo informações//
    strcpy(produto1.nome, "Pessego");
    strcpy(produto1.codigo, "123dasilva4");
    produto1.preco = 6.75;

    //Copiando a struct//
    produto2 = produto1;

    //Imprimindo struct 2//
    printf("\n=== Produto 2 ===\n");
    printf("Nome: %s\n", produto2.nome);
    printf("Codigo: %s\n", produto2.codigo);
    printf("Preco: R$ %.2f\n", produto2.preco);

    return 0;
}