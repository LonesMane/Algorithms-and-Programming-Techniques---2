#include <stdio.h>

enum estacoes
{
    PRIMAVERA = 1,
    VERAO,
    OUTONO,
    INVERNO
};

int main()
{
    enum estacoes estacao;

    //imprimindo os valores//
    for (estacao = PRIMAVERA;estacao <= INVERNO;estacao++)
        printf("%2d\n", estacao);

    return 0;
}