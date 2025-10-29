#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario
{
    char nome[30], departamento[50];
    float salario;
} Funcionario;

//Funcao para imprimir a struct//
int imprimeFuncionario (Funcionario F1)
{
    printf("\n=== Funcionario ===\n");
    printf("Nome: %s\n", F1.nome);
    printf("Departamento: %s\n", F1.departamento);
    printf("Salario: R$ %.2f\n", F1.salario);

    return 0;
}

int main()
{
    Funcionario milko;

    //Atribuindo informações//
    strcpy(milko.nome, "Milko");
    strcpy(milko.departamento, "Ciencia e computacao");
    milko.salario = 1000.50;

    //Chamando a funcao//
    imprimeFuncionario(milko);
}