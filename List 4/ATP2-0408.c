#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
};

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

    //Abrindo o arquivo//
    FILE *arq;
    arq = fopen(nome_arquivo, "wb");
    if (erro_abrir_arquivo(arq))
        return 1;
    
    //Criando o arquivo binário//
    struct Pessoa milko;

    strcpy(milko.nome, "Milko");
    milko.idade = 19;
    milko.altura = 1.83;

    fwrite(&milko, sizeof(struct Pessoa), 1, arq);
    
    fclose(arq);

    //Lendo o arquivo binário//
    arq = fopen(nome_arquivo, "rb");
    if (erro_abrir_arquivo(arq))
        return 1;

    struct Pessoa individuo;
    fread(&individuo, sizeof(struct Pessoa), 1, arq);
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", individuo.nome, individuo.idade, individuo.altura);

    fclose(arq);
    return 0;
}