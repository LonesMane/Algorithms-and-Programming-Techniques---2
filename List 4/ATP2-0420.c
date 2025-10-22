#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_arquivo[30];
    printf("Insira o nome do arquivo: ");
    scanf("%s", nome_arquivo);
    getchar();

    FILE *arq;
    arq = fopen (nome_arquivo, "rb");
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    //Calculando a média//
    float atual, media = 0;
    int qtd_numeros = 0;
    while (fread(&atual, sizeof(float), 1, arq))
    {
        media += atual;
        qtd_numeros++;
    }
    media /= qtd_numeros;

    printf("A media eh: %.2f", media);

    fclose(arq);
    return 0;
}