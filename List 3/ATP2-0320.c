#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_LIVROS 3

typedef struct livro
{
    char titulo[30];
    char autor[30];
    int ano;
}Livro;

int main()
{
    //Array de struct para (qtd_livros) livros//
    Livro livros[QTD_LIVROS];

    //Coletando as informacoes//
    for (int i = 0;i < QTD_LIVROS;i++)
    {
        printf("Nome do %do livro: ", i + 1);
        fgets(livros[i].titulo, 30, stdin);

        printf("Autor do %do livro: ", i + 1);
        fgets(livros[i].autor, 30, stdin);

        printf("Ano de lancamento do %do livro: ", i + 1);
        scanf("%d", &livros[i].ano);
        getchar();
    }

    //imprimindo as informaçoes//
    for (int i = 0;i < QTD_LIVROS;i++)
    {
        printf("\n%s", livros[i].titulo);
        printf("%s", livros[i].autor);
        printf("%d\n", livros[i].ano);
    }

    return 0;
}