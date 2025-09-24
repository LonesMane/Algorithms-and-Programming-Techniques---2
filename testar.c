#include<stdio.h>

    enum meses
    {
        janeiro = 1,
        fevereiro,
        marco,
        abril,
        maio = 10,
        junho,
        julho,
    };
int main()
{
    enum meses mes_atual;

    mes_atual = junho;

    printf("mes atual: %d", mes_atual);

    return 0;
}