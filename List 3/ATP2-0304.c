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

    //Atribuindo valores usando o operador '.'//
    strcpy(aluno1.nome, "Milko");
    aluno1.matricula = 251251446;
    aluno1.nota = 0;

    //Imprimindo os valores usando o operador '.'//
    printf("Ficha do aluno: %s\n", aluno1.nome);
    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota: %d\n", aluno1.nota);

    return 0;
}