#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct professor
{
    char nome[50];
    char disciplina[30];
    float salario;
} Professor;

int main()
{
    Professor cotozika;

    //Iniciando valores//
    strcpy(cotozika.nome, "the great Cotozika");
    strcpy(cotozika.disciplina, "ATP 2");
    cotozika.salario = 9999.99;

    //Imprimindo valores//
    printf("\n=== Professor ===\n");

    printf("Nome: %s\n", cotozika.nome);
    printf("Disciplina: %s\n", cotozika.disciplina);
    printf("Salario: R$ %.2f\n", cotozika.salario);

    return 0;
}