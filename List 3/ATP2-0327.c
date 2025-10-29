#include <stdio.h>
#include <string.h>

typedef struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

int main()
{
    Contato contato1, contato2;

    //Atribuindo valores de contato 1//
    strcpy(contato1.nome, "Milko");
    strcpy(contato1.telefone, "(17) 99603-8491");
    strcpy(contato1.email, "g.vieira26@unesp.br");

    //Copiando conteudo//
    contato2 = contato1;

    //Imprimindo contato 2//
    printf("\n=== Contato 2 ===\n");

    printf("Nome: %s\n", contato2.nome);
    printf("telefone: %s\n", contato2.telefone);
    printf("email: %s\n", contato2.email);

    return 0;
}