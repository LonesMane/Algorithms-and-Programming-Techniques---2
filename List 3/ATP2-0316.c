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
    Filme filme1;

    //COLETANDO INFORMAÇÕES//
    printf("Nome do Filme: ");
    fgets(filme1.titulo, 30, stdin);
    
    printf("Diretor do filme: ");
    fgets(filme1.diretor, 30, stdin);

    printf("Ano de Lançamento: ");
    scanf("%d", &filme1.release);

    //IMPRIMINDO INFORMAÇÕES//
    printf("\nFilme ");
    printf("%s", filme1.titulo);
    printf("%s", filme1.diretor);
    printf("%d", filme1.release);

    return 0;
}