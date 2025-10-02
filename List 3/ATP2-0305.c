#include <stdio.h>
#include <string.h>

struct alunos
{
    char nome[30];
    int matricula;
    int nota;
};

int main()
{
    struct alunos aluno1;

    //Decalrando o ponteiro//
    struct alunos *ptr;
    ptr = &aluno1;

    //Atribuindo valores usando o operador '->'//
    strcpy(ptr->nome, "Milko");
    ptr->matricula = 251251446;
    ptr->nota = 0;

    //Imprimindo os valores usando o operador '->'//
    printf("Ficha do aluno: %s\n", ptr->nome);
    printf("Matricula: %d\n", ptr->matricula);
    printf("Nota: %d\n", ptr->nota);

    return 0;
}