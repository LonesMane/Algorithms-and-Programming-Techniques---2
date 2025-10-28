#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_arquivo[30];
    printf("Insira o nome do arquivo: ");
    scanf("%s", nome_arquivo);
    getchar();

    FILE *arq;
    arq = fopen (nome_arquivo, "r");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo! ");
        return 1;
    }

    //Imprime se está ou não vazio lendo o primeiro caractere//
    int atual;
    if (fscanf(arq, "%d", &atual) == EOF)
        printf("Arquivo Vazio!");
    else
        printf("Arquivo nao esta vazio!");

    fclose(arq);
    return 0;
}