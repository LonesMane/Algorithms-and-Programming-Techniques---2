#include <stdio.h>
#include <string.h>

typedef struct ficha
{
    char nome[30];
    int ra;
    int idade;
    char curso[20];
    int telefone;
} Ficha;

#define TAM 3

int main()
{
    Ficha alunos[TAM];
    Ficha *ptr = alunos;//Declarando o ponteiro para navegar o array//
    int i;

    //Coletando os dados dos alunos//
    for(i = 0;i < TAM; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets((ptr + i)->nome, 30, stdin);
        
        printf("Digite o RA do aluno %d: ", i + 1);
        scanf("%d", &(ptr + i)->ra);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &(ptr + i)->idade);
        
        getchar();
        printf("Digite o curso do aluno %d: ", i + 1);
        fgets((ptr + i)->curso, 20, stdin);

        printf("Digite o telefone do aluno %d: ", i + 1);
        scanf("%d", &(ptr + i)->telefone);
        getchar();
    }

    //Imprimindo os dados dos alunos//
    for(i = 0;i < TAM; i++)
    {
        printf("\nFicha do aluno %d\n", i + 1);
        printf("Nome: %s", (ptr + i)->nome);
        printf("RA: %d\n", (ptr + i)->ra);
        printf("Idade: %d\n", (ptr + i)->idade);
        printf("Curso: %s", (ptr + i)->curso);
        printf("Telefone: %d\n", (ptr + i)->telefone);
    }

    return 0;
}