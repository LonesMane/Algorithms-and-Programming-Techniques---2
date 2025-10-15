//Escreva um programa em C para copiar o conteúdo de um arquivo binário para outro//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
}Pessoa;

void coletar_nome_arquivo(char nome_arquivo[])
{
    printf("Insira o nome do arquivo que deseja abrir: ");
    scanf("%s", nome_arquivo);
    getchar();
}

int erro_abrir_arquivo(FILE *arq)
{
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    else
        return 0;
}

int main()
{
    //Coletando nome do arquivo//
    char nome_arquivo[30];
    coletar_nome_arquivo(nome_arquivo);

    //Abrindo arquivo e verificando erros//
    FILE *arq1, *arq2;
    arq1 = fopen (nome_arquivo, "rb");
    if (erro_abrir_arquivo)
        return 1;

    //lendo arquivo até o final//
}