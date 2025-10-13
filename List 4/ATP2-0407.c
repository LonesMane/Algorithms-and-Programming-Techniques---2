//Trocar uma palavra por outra em um arquivo de texto//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char arq_entrada[30];
    coletar_nome_arquivo(arq_entrada);

    //Coletando a palavra que será substituída//
    char palavra_antiga[30], palavra_nova[30];
    printf("Insira a palavra que deseja substituir: ");
    scanf(" %s", palavra_antiga);
    printf("Insira a nova palavra: ");
    scanf("%s", palavra_nova);
    getchar();

    //Abrindo o arquivo//
    FILE *entrada, *saida;
    entrada = fopen(arq_entrada, "r");
    if (erro_abrir_arquivo(entrada))
        return 1;
    
    //Abrindo temporario que depois sera renomeado//
    saida = fopen("temp.txt", "w");
    if (erro_abrir_arquivo(saida))
    {
        fclose(entrada);
        return 1;
    }
    
    //Navegando até o final do arquivo//
    char palavra_atual[30];
    while (fscanf(entrada, "%s", palavra_atual) != EOF)
    {
        //Se identificar a palavra antiga, troca pela nova//
        if (strcmp(palavra_atual, palavra_antiga) == 0)
            fprintf(saida, "%s ", palavra_nova);
        //Senão, somente copia o a palavra para o arquivo temporario//
        else
            fprintf(saida, "%s ", palavra_atual);
    }

    //Fechando os arquivos//
    fclose(entrada);
    fclose(saida);
    
    //Removendo o arquivo antigo e renomeando o novo//
    remove(arq_entrada);
    rename("temp.txt", arq_entrada);

    return 0;
}