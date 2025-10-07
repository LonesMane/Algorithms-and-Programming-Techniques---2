#include <stdio.h>
#include <stdlib.h>

#define MAX 9

int main()
{
    FILE *arquivo, *saida;//Declaração dos arquivos que serão utilizados//

    int n, *contagem, valor, i;

    arquivo = fopen("numeros.txt", "r");//Abre o arquivo numeros.txt para leitura//

    //Verifica se o arquivo existe//
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo. Corrompido ou inexistente\n");
        return 1;
    }

    //Coletando o primeiro número (qtd de numeros a serem lidos)//
    fscanf(arquivo, "%d", &n);

    //Alocando memória para o vetor de números//
    contagem = (int *)malloc(n * sizeof(int) * (MAX + 1));

    //Caso a alocação falhe//
    if (contagem == NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    //Iniciando a contagem em 0 para cada número//
    for (i = 0; i <= MAX; i++)
    {
        contagem[i] = 0;
    }

    //Lendo os números do arquivo e contando a ocorrência de cada um//
    for(i = 0;i < n; i++)
    {
        fscanf(arquivo, "%d", &valor);
        contagem[valor]++;
    }

    //Produzindo um arquivo de saída//
    saida = fopen("saida.txt", "W");

    //Caso o arquivo não seja criado//
    if(saida == NULL)
    {
        printf("Erro ao criar arquivo de saída\n");
    }
    
    //Escrevendo a contagem de cada número no arquivo de saída//
    for(i = 0; i <= MAX; i++)
    {
        if(contagem[i] > 0)
            fprintf(saida, "Numero de %d: %d\n", i, contagem[i]);
    }

    //Fechando os arquivos//
    fclose(arquivo);
    fclose(saida);
    free(contagem);//Liberando a memória alocada//

    return 0;
}
