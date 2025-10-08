#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *contagem_linhas;
    char nome_arquivo[50];
    int n_linhas = 0;

    //Coletando o nome do arquivo que será aberto//
    printf("Digite o nome do arquivo a ser aberto (com extensao): ");
    scanf("%s", nome_arquivo);

    contagem_linhas = fopen(nome_arquivo, "r");
    
    //Caso o arquivo não seja aberto//
    if (contagem_linhas == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    //Passeando pelo arquivo até o final (EOF), e aumentando em 1 o contador de linhas a cada '\n' encontrado//
    char caractere;

    //Enquanto não chegar ao final do arquivo//
    while ((caractere = fgetc(contagem_linhas)) != EOF)
    {
        //Caso encontre o final da linha (\n) aumenta a contagem em 1//
        if (caractere == '\n')
            n_linhas++;
    }

    printf("O arquivo %s possui %d linhas.", nome_arquivo, n_linhas);

    fclose(contagem_linhas);

    return 0;
}