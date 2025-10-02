#include <stdio.h>
#include <string.h>

struct ficha_aluno
{
    char nome[30];
    int matricula;
    int nota;
};

//Função para imprimir a ficha do aluno//
void imprimir_ficha(struct ficha_aluno aluno)
{
    //Imprimindo os valores//
    printf("Ficha do aluno: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota: %d\n", aluno.nota);
}

int main()
{
    struct ficha_aluno aluno1;

    //Atribuindo valores//
    strcpy(aluno1.nome, "Milko");
    aluno1.matricula = 251251446;
    aluno1.nota = 0;

    //Chamando a função para imprimir a ficha do aluno//
    imprimir_ficha(aluno1);

    return 0;
}