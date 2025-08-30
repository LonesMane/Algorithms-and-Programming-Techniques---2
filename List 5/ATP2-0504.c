#include<stdio.h>
#include<stdlib.h>

int calc_fibonacci (int num)
{
    if (num < 0)
        return -1;

    else if (num == 0)
        return 0;

    else if (num == 1)
        return 1;

    else
        return calc_fibonacci(num-1) + calc_fibonacci(num-2);
        
}

int main()
{
    int num;
    int i;

    //Coletando o numero do usuario para se calcular Fibonacci//
    printf("Calcular quantos termos: ");
    scanf("%d", &num);

    //Chamando a função e imprimindo os numeros//
    printf("\nSequencia de Fibonacci ate o %d termo\n", num);
    for(i = 1;i < num+1;i++)
        printf("%d ", calc_fibonacci(i));

    return 0;
}