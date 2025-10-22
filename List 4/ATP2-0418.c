#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ABRINDO ARQUIVO//
    char nome_arquivo[30];
    printf("Insira o nome do arquivo ");
    scanf("%s", nome_arquivo);
    getchar();

    FILE *arq;
    arq = fopen (nome_arquivo, "r");
    if (arq == NULL)
    {
        printf("Erro ao abrir arquivo!");
        return 1;
    }

    //lendo arquivo e registrando os numeros enquanto classifico como maior ou menor//
    int numero, maior, menor;
    while (fscanf(arq, "%d", &numero) != EOF)
    {
        if (int primeiro)
            maior = menor = numero;
    }

    printf("O maior eh: %d", maior);
    printf("O menor eh: %d", menor);

    fclose(arq);
    return 0;
}