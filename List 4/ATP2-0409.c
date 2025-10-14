//Escreva um programa em C para contar o n ́umero de registros em um arquivo binario//
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
    Pessoa cont;
    //coletando nome do arquivo//
    char nome_arquivo[30];
    coletar_nome_arquivo(nome_arquivo);

    //Abrindo o arquivo//
    FILE *arq;
    arq = fopen(nome_arquivo, "rb");
    if (erro_abrir_arquivo(arq))
        return 1;
    
    //Lendo o arquivo até o final e contando os registros//
    int registros = 0;
    while (fread(&cont, sizeof(Pessoa), 1, arq))
        registros++;
    
    printf("O numero de registros eh: %d", registros);

    fclose(arq);
    return 0;
}
