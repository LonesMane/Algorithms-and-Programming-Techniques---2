#include<stdio.h>
#include<stdlib.h>

int calc_soma (int num)
{
    //Caso base: para 0//
    if (num == 0)
        return 0;
    //Caso de numero fora do escopo (negativo)//
    else if (num < 0)
        return -1;
    //Todos os demais casos, chamando casos anteriores (Recursão)//
    else
        return num + calc_soma(num - 1);
}

int main()
{
    int num,
        soma;
    
    //Coletando do usuário qual numero para calcular a soma//
    printf("Calcular soma: ");
    scanf("%d", &num);

    //Chamando a função e armazenando o resultado//
    soma = calc_soma(num);

    //Imprimindo resultados//
    if (soma < 0)
        printf("Erro: Numeros negativos nao sao naturais");
    else
        printf("A soma dos %d primeiros numeros naturais eh: %d", num, soma);
    
    return 0;
}