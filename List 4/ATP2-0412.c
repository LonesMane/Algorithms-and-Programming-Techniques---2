#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
}Pessoa;

void coletar_nome (char nome_arquivo[30])
{
    printf("Insira o nome do arquivo a ser aberto: ");
    scanf("%s", nome_arquivo);
    getchar();
}

int erro_arquivo (FILE *arq)
{
    if (arq == NULL)
        {
            printf("Erro ao abrir/criar arquivo!");
            return 1;
        }
        else
            return 0;
}

int main()
{
    //coletando nome do arquivo de entrada//
    char nome_arquivo[30];
    coletar_nome(nome_arquivo);

    //Abrindo arquivo como apendice//
    FILE *arq;
    arq = fopen(nome_arquivo, "ab");
    if (erro_arquivo(arq))
        return 1;

    //Coletando dados para preencher//
    Pessoa individuo;
    printf("\n\nInsira o nome da Pessoa: ");
    fgets(individuo.nome, sizeof(individuo.nome), stdin);
    printf("Insira a idade da Pessoa: ");
    scanf("%d", &individuo.idade);
    printf("Insira a altura da Pessoa: ");
    scanf("%f", &individuo.altura);

    //escrevendo o novo registro//
    fwrite(&individuo, sizeof(Pessoa), 1, arq);

    fclose(arq);
    return 0;
}



    

