#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TAM 2

void inverte_string (char *string, int posicao_final, int posicao_inicial)
{
    //Função Auxiliar para fazer a troca de valores//
    char aux;

    //Caso base - Para quando ouver dois elementos//
    if (posicao_final == 1)
        {
            aux = string[posicao_final];
            string[posicao_final] = string[posicao_inicial];
            string[posicao_inicial] = aux;
            return;
        }
        
    //Caso base - quando a funcao tiver terminado; quando encontrarmos o meio da string ou houver somente 1 elemento//
    if (posicao_final == posicao_inicial)
        return;

    //Passo recursivo - trocar a posicao inicial com a final usando de uma variavel auxiliar, depois fazer o mesmo aumentando 1 na inicial e 1 na final//
    else
        {
            aux = string[posicao_final];
            string[posicao_final] = string[posicao_inicial];
            string[posicao_inicial] = aux;
            return inverte_string(string, posicao_final-1, posicao_inicial+1);
        }
}

int main()
{
    char string[TAM];
    
    //Coletando a String//
    printf("Insira a string: ");
    fgets(string, sizeof(string)+1, stdin);

    //Imprimindo a String Original//
    printf("\n\nString Original: ");
    printf("%s ", string);

    //Chamando a função para inverter a função//
    inverte_string(string, TAM-1, 0);

    //Imprimindo a String Invertida//
    printf("\n\nString Invertida: ");
    printf("%s ", string);

    return 0;
}