#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

long long calc_fatorial (int num)
{
    //Caso base (0 e 1)//
    if (num == 0 || num == 1)
        return 1;
    
    //Caso negativo, retorna erro//
    else if (num < 0)
        return -1;

    //Todos os casos demais, chamando o caso anterior (Recursão)//
    else
        return num * calc_fatorial(num - 1);
}

int main()
{
    int num;
    long long resultado;

    //Coletando do usuário qual numero para calcular o fatorial//
    printf("Calcular fatorial: ");
    scanf("%d", &num);

    //Chamando a função e armazenando o resultado//
    resultado = calc_fatorial(num);

    //imprimindo o resultado//
    if (resultado == -1)
        printf("Erro: Nao ha fatorial de numero negativo");
    else
    printf("\nFatorial de %d: %lld", num, resultado);

    return 0;
}