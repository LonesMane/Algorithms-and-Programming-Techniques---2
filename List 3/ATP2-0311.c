#include <stdio.h>
#include <string.h>

enum dia_semana
{
    SEGUNDA = 1,//Iniciando a enumeração em 1//
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
};

int main()
{
    enum dia_semana dia;

    //Imprimindo os valores dos dias da semana//
    for(dia = SEGUNDA;dia <= DOMINGO; dia++)
    {
        printf("Dia %d\n", dia);
    }

    return 0;
}