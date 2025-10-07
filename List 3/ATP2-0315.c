#include <stdio.h>

typedef struct endereco
{
    char rua[50];
    int numero;
    char bairro[30];
    char cidade[30];
    char estado[3];
    int cep;
} Endereco;

int main()
{
    Endereco casa1, casa2;

    printf("Digite o endereco da casa 1:\n");
    printf("Rua: ");
    fgets(casa1.rua, sizeof(casa1.rua), stdin);
    printf("Numero: ");
    scanf("%d", &casa1.numero);
    getchar();
    printf("Bairro: ");
    fgets(casa1.bairro, sizeof(casa1.bairro), stdin);
    printf("Cidade: ");
    fgets(casa1.cidade, sizeof(casa1.cidade), stdin);
    printf("Estado (sigla): ");
    fgets(casa1.estado, sizeof(casa1.estado), stdin);
    printf("CEP: ");
    scanf("%d", &casa1.cep);
    getchar();

    casa2 = casa1;

    printf("\nEndereco da casa 1:\n");
    printf("Rua: %s", casa1.rua);
    printf("Numero: %d\n", casa1.numero);
    printf("Bairro: %s", casa1.bairro);
    printf("Cidade: %s", casa1.cidade);
    printf("Estado: %s", casa1.estado);
    printf("CEP: %d\n", casa1.cep);
    
    printf("\nEndereco da casa 2:\n");
    printf("Rua: %s", casa2.rua);
    printf("Numero: %d\n", casa2.numero);
    printf("Bairro: %s", casa2.bairro);
    printf("Cidade: %s", casa2.cidade);
    printf("Estado: %s", casa2.estado);
    printf("CEP: %d\n", casa2.cep);

    return 0;
}