#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_LIVROS 2

typedef struct {
    char nome[30], autor[50];
    float preco;
} Livro;

int main()
{
    Livro livros[QTD_LIVROS];
    int opcao, livrosAtuais = 0;

    //menu//
    do
    {
        printf("\n=== Controle de Livros ===\n");
    
        printf("1 - Cadastro de Livro\n");
        printf("2 - Biblioteca\n");
        printf("0 - Sair\n");
    
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 1: // registrar livros
                if (livrosAtuais < QTD_LIVROS)
                {
                    printf("\n=== Livro %d ===\n", livrosAtuais + 1);

                    printf("Nome: ");
                    fgets(livros[livrosAtuais].nome, 30, stdin);

                    printf("Autor: ");
                    fgets(livros[livrosAtuais].autor, 50, stdin);

                    printf("Preco: ");
                    scanf("%f", &livros[livrosAtuais].preco);
                    getchar();

                    livrosAtuais++;
                }
                else
                    printf("Maximo de livros cadastrados!\n");
                break;

            case 2: // imprimir todos os livros
                printf("=== Biblioteca ===\n");
                for (int i = 0; i < livrosAtuais; i++)
                {
                    printf("\nLivro %d\n", i + 1);
                    printf("Nome: %s", livros[i].nome);
                    printf("Autor: %s", livros[i].autor);
                    printf("Preco: R$ %.2f\n", livros[i].preco);
                }
                break;
            
            case 0: // sair
                printf("\nEncerrando...\n");
                break;
            
            default: // opcao invalida
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}