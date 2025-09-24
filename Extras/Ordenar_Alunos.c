//Crie uma estrutura que armazene nome e idade de alunos e depois ordene por idade//
#include <stdio.h>

struct alunos
{
    char nome[30];
    int idade;
};

#define QTD_ALUNOS 3
int main()
{
    struct alunos turma[QTD_ALUNOS];
    int i, j;

    for(i = 0; i < QTD_ALUNOS;i++)
    {
        printf("Insira o nome do aluno %d: ", i+1);
        fgets(turma[i].nome, 30, stdin);

        printf("Insira a idade do aluno %d: ", i+1);
        scanf("%d", &turma[i].idade);
        getchar();
    }

    for(i = 0;i < QTD_ALUNOS - 1;i++)
        for(j = 0;j < QTD_ALUNOS - 1;j++)
            if(turma[j].idade < turma[j+1].idade)
            {
                struct alunos aux = turma[j];
                turma[j] = turma[j+1];
                turma[j+1] = aux;
            }
    printf("\nAlunos ordenados por idade:\n");
    for(i = 0;i < QTD_ALUNOS;i++)
        printf("Nome: %sIdade: %d\n\n", turma[i].nome, turma[i].idade);
        
    return 0;
}