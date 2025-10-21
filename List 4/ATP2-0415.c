#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
}Pessoa;

int abrirArquivo_wb (FILE **arq)
{
    char nome_arquivo[30];
    printf("Insira o nome do arquivo: ");
    scanf("%s", nome_arquivo);
    getchar();
    *arq = fopen(nome_arquivo, "wb");
    if (*arq == NULL)
        {
            printf("Erro no arquivo!");
            return 1;
        }
    return 0;
}

int main()
{
    FILE *arq;
    if (abrirArquivo_wb(&arq))
        return 1;
    
    //CRIANDO TRÊS STRUCTS//
    Pessoa Milko, Vilko, Silko;
    strcpy(Milko.nome, "Milko");
    strcpy(Vilko.nome, "Vilko");
    strcpy(Silko.nome, "Silko");
    Milko.idade = 19;
    Vilko.idade = 18;
    Silko.idade = 17;
    Milko.altura = 1.83;
    Vilko.altura = 1.79;
    Silko.altura = 1.74;

    //ESCREVENDO AS STRUCTS NO ARQUIVO//
    fwrite(&Milko, sizeof(Pessoa), 1, arq);
    fwrite(&Vilko, sizeof(Pessoa), 1, arq);
    fwrite(&Silko, sizeof(Pessoa), 1, arq);

    //IDENTIFICANDO O CAMPO A SER ALTERADO//
    char nome_struct[30];
    printf("Insira o nome do individuo ");
    scanf("%s", nome_struct);
    getchar();

    char campo_struct[10];
    printf("Insira o campo para ser alterado ");
    scanf("%s", campo_struct);
    getchar();

    //DADO NOVO//
    printf("Insira a nova informação: ");
    if (strcmp(campo_struct, "nome"))
    

    fclose(arq);
    return 0;
}