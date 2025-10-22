#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
typedef struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
}Pessoa;
#pragma pack()

int abrirArquivo_rplusb (FILE **arq)
{
    char nome_arquivo[30];
    printf("Insira o nome do arquivo: ");
    scanf("%s", nome_arquivo);
    getchar();
    *arq = fopen(nome_arquivo, "r+b");
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
    if (abrirArquivo_rplusb(&arq))
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
    char nome_novo[30];
    int idade_novo;
    float altura_novo;
    printf("Insira a nova informação: ");
    if (strcmp(campo_struct, "nome") == 0)
    {
        scanf("%s", nome_novo);
        getchar();
    }
    else if (strcmp(campo_struct, "idade") == 0)
        scanf("%d", &idade_novo);
    else
        scanf("%f", &altura_novo);
    
    //POSICIONANDO O CURSOR//
    int posicao = 0;
    if (strcmp(nome_struct, "Milko") == 0)
        posicao += 0;
    else if (strcmp(nome_struct, "Vilko") == 0)
        posicao = sizeof(Pessoa);
    else
        posicao = 2 * sizeof(Pessoa);

    if (strcmp(campo_struct, "nome") == 0)
        posicao += 0;
    else if (strcmp(campo_struct, "idade") == 0)
        posicao += 30;
    else
        posicao += 30 + sizeof(int);

    fseek(arq, posicao, SEEK_SET);

    //TROCANDO O CAMPO//
    if (strcmp(campo_struct, "nome") == 0)
        fwrite(&nome_novo, sizeof(nome_novo), 1, arq);
    else if (strcmp(campo_struct, "idade") == 0)
        fwrite(&idade_novo, sizeof(idade_novo), 1, arq);
    else
        fwrite(&altura_novo, sizeof(altura_novo), 1, arq);

    fclose(arq);
    return 0;
}