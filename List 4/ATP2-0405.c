#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq_1, *arq_2, *arq_final;
    //Abrindo o arquivo final//
    arq_final = fopen("arquivo_final.txt", "w");

    //Abrindo o primeiro arquivo//
    arq_1 = fopen("arquivo1.txt", "r");

    //Caso o arquivo não seja aberto//
    if (arq_1 == NULL)
    {
        printf("Erro ao abrir o primeiro arquivo\n");
        return 1;
    }

    //Copiando o conteúdo do primeiro arquivo para o arquivo final//
    char conteudo[100];
    
    while (fgets(conteudo, sizeof(conteudo), arq_1) != NULL)
        {
            fgets(conteudo, sizeof(conteudo), arq_1);
            fputs(conteudo, arq_final);
        }
    //Fechando o primeiro arquivo//
        fclose(arq_1);

    //Abrindo o segundo arquivo//
    arq_2 = fopen("arquivo2.txt", "r");

    //Caso o arquivo não seja aberto//
    if (arq_2 == NULL)
    {
        printf("Erro ao abrir o segundo arquivo\n");
        return 1;
    }

    //Copiando o conteúdo do segundo arquivo para o arquivo final//
    while (fgets(conteudo, sizeof(conteudo), arq_2) != NULL)
        {
            fgets(conteudo, sizeof(conteudo), arq_2);
            fputs(conteudo, arq_final);
        }

    //Fechando o segundo arquivo//
    fclose(arq_2);
    
    //Fechando o arquivo final//
    fclose(arq_final);

       return 0;
    }