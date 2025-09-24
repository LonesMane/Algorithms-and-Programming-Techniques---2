#include <stdio.h>
typedef struct ficha_carro
{
    char marca[30];
    char modelo[30];
    int ano;
} VEICULO;

#define QTD_CARROS 3
int main()
{
    VEICULO carros[QTD_CARROS];
    int i;

    for(i = 0;i < QTD_CARROS;i++)
    {
        printf("Insira a marca do carro %d: ", i+1);
        fgets(carros[i].marca, 30, stdin);

        printf("Insira o modelo do carro %d: ", i+1);
        fgets(carros[i].modelo, 30, stdin);

        printf("Insira o ano do carro %d: ", i+1);
        scanf("%d", &carros[i].ano);
        getchar();
    }

    printf("\nFicha dos carros:\n");
    for(i = 0;i < QTD_CARROS;i++)
        printf("Carro %d\nMarca: %sModelo: %sAno: %d\n\n", i+1, carros[i].marca, carros[i].modelo, carros[i].ano);

    return 0;
}

