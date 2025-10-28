#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
typedef struct produto
{
    char nome[30]; //30//
    int codigo; //4//
    float preco; //4//
}Produto; //30 + 4 + 4 = 38 (40 se não remover o padding)//
#pragma pack() //removendo o padding da struct para obter o tamanho real//

int main()
{
    Produto lata1;

    //Inserindo informações//
    strcpy(lata1.nome, "Pessego");
    lata1.codigo = 12345;
    lata1.preco = 6.75;

    //Imprimindo o tamanho da struct//
    int tamanho = sizeof(lata1);
    printf("O tamanho da struct eh: %d", tamanho);

    return 0;
}