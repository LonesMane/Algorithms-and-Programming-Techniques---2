#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_PRODUTOS 2

typedef struct produto
{
    char nome[30], codigo [30];
    float preco;
} Produto;

int main()
{
    //Declarando 4 produtos//
    Produto produtos[NUM_PRODUTOS];

    //Coletando informações//
    for (int i = 0;i < NUM_PRODUTOS;i++)
    {
        printf("\n=== Produto %d ===\n", i + 1);
        printf("Nome: ");
        fgets(produtos[i].nome, 30, stdin);
        printf("Codigo: ");
        fgets(produtos[i].codigo, 30, stdin);
        printf("Preco: ");
        scanf("%f", &produtos[i].preco);
        getchar();
    }

    //Imprimindo os produtos//
    printf("\n=== Produtos ===\n");
    for (int i = 0;i < NUM_PRODUTOS;i++)
    {
        printf("\n--- Produto %d\n", i + 1);
        printf("Nome: %s", produtos[i].nome);
        printf("Codigo: %s", produtos[i].codigo);
        printf("Preco: R$ %.2f\n", produtos[i].preco);
    }

    return 0;
}