#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    //LENDO ATÉ O FINAL DO ARQUIVO//
    int numero, soma = 0;

    while (fscanf(arq, "%d", &numero) != EOF)
        soma += numero;

    printf("A soma dos numeros eh: %d", soma);
    
    fclose(arq);
    return 0;
}