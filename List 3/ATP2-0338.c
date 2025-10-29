#include <stdio.h>
#include <string.h>

typedef struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

int main()
{
    Contato contato;

    //Atribuindo valores de contato//
    strcpy(contato.nome, "Milko");
    strcpy(contato.telefone, "(17) 99603-8491");
    strcpy(contato.email, "g.vieira26@unesp.br");

    //Imprimindo contato//
    printf("\n=== Contato ===\n");

    printf("Nome: %s\n", contato.nome);
    printf("telefone: %s\n", contato.telefone);
    printf("email: %s\n", contato.email);

    return 0;
}