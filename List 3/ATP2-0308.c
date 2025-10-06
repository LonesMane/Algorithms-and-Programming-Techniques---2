#include <stdio.h>
#include <string.h>

#define MAX 5

struct produtos
{
    char nome[30];
    char codigo[10];
    float preco;
};

int main()
{
    struct produtos produto[MAX];
    int i;

    //Lendo os dados dos produtos//
    for(i = 0;i < MAX; i++)
    {
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(produto[i].nome, 30, stdin);

        printf("Digite o codigo do produto %d: ", i + 1);
        fgets(produto[i].codigo, 10, stdin);

        printf("Digite o preco do produto %d: ", i + 1);
        scanf("%f", &produto[i].preco);
        getchar();
    }

    //Imprimindo valores//
    printf("\nProdutos cadastrados:\n");
    for(i = 0;i < MAX; i++)
    {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s", produto[i].nome);
        printf("Codigo: %s", produto[i].codigo);
        printf("Preco: %.2f\n\n", produto[i].preco);
    }

    return 0;
}