#include <stdio.h>
#include <string.h>

typedef struct ficha
{
    char nome[30];
    float salario;
    char departamento[30];
} Colaborador;

int main()
{
    Colaborador funcionario1;

    //Definindo os valores do funcionario1//
    strcpy(funcionario1.nome, "Milko");
    funcionario1.salario = 3000.00;
    strcpy(funcionario1.departamento, "TI");

    //Exibindo os valores do funcionario1//
    printf("Nome: %s\n", funcionario1.nome);
    printf("Salario: %.2f\n", funcionario1.salario);
    printf("Departamento: %s\n", funcionario1.departamento);

    return 0;
}
