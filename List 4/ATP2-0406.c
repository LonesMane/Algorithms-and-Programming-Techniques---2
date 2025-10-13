#include <stdio.h>
#include <stdlib.h>

void coletar_nome_arquivo(char nome_arquivo[])
{
    printf("Insira o nome do arquivo que deseja abrir: ");
    scanf("%s", nome_arquivo);
    getchar();
}

int main()
{
    //Colentando nome do arquivo//
    char nome_arquivo[50];
    coletar_nome_arquivo(nome_arquivo);

    //Coletando o caracter que será buscado//
    char caractere;
    printf("Insira o caractere que deseja buscar: ");
    scanf(" %c", &caractere);

    //Abrindo o arquivo//
    FILE *arq;
    arq = fopen(nome_arquivo, "r");

    //Caso o arquivo não seja aberto//
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    //Navegando pelos caracteres do arquivo até encontrar o caractere ou chegar ao final do arquivo//
    int char_atual;
    while ((char_atual = fgetc(arq)) != EOF)
    {
        if (char_atual == caractere)
        {
            printf("Caractere encontrado!\n");
              fclose(arq);
            return 0;
        }
    }

    //Caso chegue ao final do arquivo sem encontrar o caractere//
    printf("Caractere nao encontrado!\n");
    fclose(arq);

    return 0;
}