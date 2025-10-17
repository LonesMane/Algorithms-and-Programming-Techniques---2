//Escreva um programa em C para ler e exibir um registro espec ́ıfico em um arquivo bin ́ario.//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
typedef struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
} Pessoa;
#pragma pack()



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
    
    //Abrindo arquivo binário para leitura//
    FILE *arq;
    arq = fopen (nome_arquivo, "wb");
    if (erro_abrir_arquivo(arq))
        return 1;
    
    //Escrevendo o arquivo//
    Pessoa Milko;
    strcpy(Milko.nome, "Milko");
    Milko.idade = 19;
    Milko.altura = 1.83;

    fwrite (&Milko, sizeof(Pessoa), 1, arq);

    fclose(arq);

    //Lendo um registro específico do arquivo binário//

    arq = fopen (nome_arquivo, "rb");
    if (erro_abrir_arquivo(arq))
        return 1;
    
    char campo[10];
    printf("Digite qual campo deseja acessar (nome/idade/altura): ");
    scanf("%s", campo);

    int posicao;
    
    if (strcmp(campo, "nome") == 0)
    {
        posicao = 0;
        fseek(arq, posicao, SEEK_SET);
        char nome[30];
        fread(nome, sizeof(char), 30, arq);
        printf("Nome: %s", nome);
    }
    else if (strcmp(campo, "idade") == 0)
    {
        posicao = 30;
        fseek(arq, posicao, SEEK_SET);
        int idade;
        fread(&idade, sizeof(int), 1, arq);
        printf("Idade: %d", idade);
    }
    else if (strcmp(campo, "altura") == 0)
    {
        posicao = 34;
        fseek(arq, posicao, SEEK_SET);
        float altura;
        fread(&altura, sizeof(float), 1, arq);
        printf("Altura: %.2f", altura);
    }
    else
    {
        printf("Campo invalido\n");
        return 1;
    }

    fclose(arq);
    return 0;
}
