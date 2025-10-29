#include <stdio.h>

enum mes
{
    JANEIRO = 1,
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO,
    JUNHO,
    JULHO,
    AGOSTO,
    SETEMBRO,
    OUTUBRO,
    NOVEMBRO,
    DEZEMBRO
};

int main()
{
    enum mes mes;

    //imprimindo os valores//
    for (mes = JANEIRO;mes <= DEZEMBRO;mes++)
        printf("%2d\n", mes);

    return 0;
}