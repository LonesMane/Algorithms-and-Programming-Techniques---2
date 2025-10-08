#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *copiar_arquivo, *saida;

    //Coletando o nome do arquivo que será aberto//
    char origem[50];
    printf("Insira o nome do arquivo de origem (com extensao): ");
    scanf("%s", origem);

    //Abrindo o arquivo de origem//
    copiar_arquivo = fopen(origem, "r");
    //Caso o arquivo não seja aberto//
    if (copiar_arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    saida = fopen("copia.txt", "w");
    //Caso o arquivo não seja aberto//
    if (saida == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        return 1;
    }

    //copiando os caracteres//
    char caractere;
    //Enquanto não chegar ao final do arquivo//
    while ((caractere = fgetc(copiar_arquivo)) != EOF)
            fputc(caractere, saida);
    
    return 0;
}