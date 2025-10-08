#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    FILE *leitura;
    leitura = fopen("../saida_0401.txt", "r");

    //Caso o arquivo não seja aberto//
    if (leitura == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    char frase[100];
    //Lendo o conteúdo do arquivo e imprimindo na tela//
    while (fgets(frase, sizeof(frase), leitura) != NULL)
    {
        printf("%s", frase);
    }

    fclose(leitura);
    return 0;
}