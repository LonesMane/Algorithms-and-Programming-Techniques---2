#include <stdio.h>

typedef struct cliente
{
    char nome[50];
    int idade;
    char endereco[100];
} Clientes;

int main()
{
    Clientes cliente1;

    //Definindo as informações do cliente1//
    printf("Digite o nome do cliente: ");
    fgets(cliente1.nome, sizeof(cliente1.nome), stdin);

    printf("Digite a idade do cliente: ");
    scanf("%d", &cliente1.idade);
    getchar();

    printf("Digite o endereco do cliente: ");
    fgets(cliente1.endereco, sizeof(cliente1.endereco), stdin);

    //Exibindo as informações do cliente1//
    printf("\nInformacoes do Cliente:\n");
    printf("Nome: %s", cliente1.nome);
    printf("Idade: %d\n", cliente1.idade);
    printf("Endereco: %s", cliente1.endereco);

    return 0;
}