#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct filme
{
    char titulo[30];
    char diretor[30];
    int release;
}Filme;

int main()
{
    Filme filme1, *ptr;

    //PREPARANDO O PONTEIRO//
    ptr = &filme1;

    //COLETANDO INFORMAÇÕES//
    printf("Nome do Filme: ");
    fgets(ptr->titulo, 30, stdin);
    
    printf("Diretor do filme: ");
    fgets(ptr->diretor, 30, stdin);

    printf("Ano de Lançamento: ");
    scanf("%d", &ptr->release);

    //IMPRIMINDO INFORMAÇÕES//
    printf("\nFilme ");
    printf("%s", ptr->titulo);
    printf("%s", ptr->diretor);
    printf("%d", ptr->release);

    return 0;
}
