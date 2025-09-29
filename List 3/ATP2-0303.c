#include <stdio.h>

struct ficha_aluno
{
    char nome[50];
    int idade;
    float nota;
};

#define QTD_ALUNOS 3

int main()
{
    struct ficha_aluno alunos[QTD_ALUNOS];
    struct ficha_aluno alunas[QTD_ALUNOS];
    int i;

    for(i = 0;i < QTD_ALUNOS;i++)
    {
        printf("Insira o nome do aluno %d: ", i+1);
        fgets(alunos[i].nome, 50, stdin);

        printf("Insira a idade do aluno %d: ", i+1);
        scanf("%d", &alunos[i].idade);
        getchar();
        
        printf("Insira a nota do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota);
        getchar();
    }

    for(i = 0;i < QTD_ALUNOS;i++)
        alunas[i] = alunos[i];

    printf("\nFicha dos alunos:\n");
    for(i = 0;i < QTD_ALUNOS;i++)
        printf("Aluno %d\nNome: %sIdade: %d\nNota: %.2f\n\n", i+1, alunas[i].nome, alunas[i].idade, alunas[i].nota);

    return 0;
}