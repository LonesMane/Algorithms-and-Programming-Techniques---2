#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Struct para carros//
typedef struct carro
{
    char marca[30];
    char modelo[30];
    int ano;
}Carro;

//Função para imprimir qualquer carro//
void imprimeCarro (Carro carro)
{
    printf("%s", carro.marca);
    printf("\n%s", carro.modelo);
    printf("\n%d", carro.ano);
}

int main()
{
    Carro carro1;

    //inserindo informação dos carros//
    strcpy(carro1.marca, "Fiat");
    strcpy(carro1.modelo, "Uno");
    carro1.ano = 2001;

    //Chamando a função//
    imprimeCarro (carro1);

    return 0;
}