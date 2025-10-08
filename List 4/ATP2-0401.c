#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *saida_01;
    saida_01 = fopen("../saida_0401.txt", "w");

    //Caso o arquivo não seja criado//
    if (saida_01 == NULL)
    {
        printf("Erro ao criar arquivo de saida\n");
        return 1;
    }

    //Imprimindo texto no arquivo//
    fprintf(saida_01, "'So se ve bem com o coracao, o essencial eh invisivel aos olhos'\n");

    fclose(saida_01);

    return 0;
}