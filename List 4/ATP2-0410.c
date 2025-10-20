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
    Pessoa cont;
    //Coletando nome do arquivo//
    char nome_arquivo[30];
    coletar_nome_arquivo(nome_arquivo);

    FILE *arq1, *arq2;

    arq1 = fopen (nome_arquivo, "wb");
    if (erro_abrir_arquivo(arq1))
        return 1;
    
    //Escrevendo o arquivo//
    Pessoa Milko, Milko2;
    strcpy(Milko.nome, "Milko");
    Milko.idade = 19;
    Milko.altura = 1.83;

    strcpy(Milko2.nome, "Milko2");
    Milko2.idade = 20;
    Milko2.altura = 2.83;

     fwrite (&Milko, sizeof(Pessoa), 1, arq1);
     fwrite (&Milko2, sizeof(Pessoa), 1, arq1);

     fclose(arq1);


    //Abrindo arquivo e verificando erros//
    arq1 = fopen (nome_arquivo, "rb");
    if (erro_abrir_arquivo(arq1))
        return 1;
    arq2 = fopen ("copia.bin", "wb");
    if (erro_abrir_arquivo(arq2))
        return 1;

    //lendo arquivo e copiando até o final//
    while (fread(&cont, sizeof(Pessoa), 1, arq1))
        fwrite(&cont, sizeof(Pessoa), 1, arq2);
    
    fclose(arq1);
    fclose(arq2);
    return 0;
}