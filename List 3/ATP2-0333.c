#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1) //Remover Padding//
typedef struct funcionario
{
    char nome[30], departamento[50];//30 + 50 = 80//
    float salario;//4//
} Funcionario;//80 + 4 = 84//
#pragma pack()

int main()
{
    Funcionario milko;

    //Atribuindo as informaçoes//
    strcpy(milko.nome, "Milko Rosas");
    strcpy(milko.departamento, "LCB Bus");
    milko.salario = 1.00;

    //Medindo o tamanho da Struct//
    int tamanho = sizeof(milko);
    printf("\n=== Struct 'funcionario' ===\n");
    printf("Tamanho: %d", tamanho);

    return 0;
}