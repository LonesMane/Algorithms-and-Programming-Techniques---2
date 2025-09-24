#include<stdio.h>

struct livro{
    char titulo[50];
    char autor[50];
    int ano;
};

int main()
{
    struct livro livro1;

    printf("Digite o titulo do livro: ");
    fgets(livro1.titulo, 50, stdin);

    printf("\n\nDigite o autor do livro: ");
    fgets(livro1.autor, 50, stdin);

    printf("\n\nDigite o ano do livro: ");
    scanf("%d", &livro1.ano);

    printf("\n\nTitulo: %s", livro1.titulo);
    printf("Autor: %s", livro1.autor);
    printf("Ano: %d", livro1.ano);

    return 0;
}