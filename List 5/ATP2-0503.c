#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int maior_elemento (int array[], int tam)
{
    int maior;

    //Para quando só há 1 elemento (maior é ele mesmo) e para comparar com os outros quando houver recursão//
    if (tam == 1)
        return array[0];
    
    //chama a mesma função até chegar ao primeiro elemento, armazenando em 'maior'//
    maior = maior_elemento(array, (tam - 1));

    //Compara o primeiro elemento com o último, e envia de volta
    if (array[tam -1] > maior)
        return array[tam - 1];
    else
        return maior;
}

#define TAM 5

int main()
{
    srand(time(0));
    
    int array[TAM],
        maior;
    int i;

    //Inserindo numeros aleatorios no array//
    for(i = 0;i < TAM;i++)
        array[i] = rand() % 101;
    
    //Imprimindo o conteúdo do array//
    printf("Array:\n");
    for(i = 0;i < TAM;i++)
        printf("%d ", array[i]);
    
    //Chamando a função e armazenando//
    maior = maior_elemento(array,TAM);

    //Imprimindo o resultado obtido//
    printf("\n\nMaior elemento: %d", maior);

    return 0;
}