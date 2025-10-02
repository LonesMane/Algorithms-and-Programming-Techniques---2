#include <stdio.h>

//Definindo uma estrutura para coordenadas de pontos//
struct pontos_figura
{
    int x;
    int y;
};

int main()
{
    struct pontos_figura ponto1, ponto2;

    //Coletando as coordenadas do ponto 1//
    printf("Digite as coordenadas do ponto 1 (x y): ");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    //Copiando o conteúdo de ponto1 para ponto2//
    ponto2 = ponto1;

    //Imprimindo ambas estruturas//
    printf("Ponto 1: (%d, %d)\n", ponto1.x, ponto1.y);
    printf("Ponto 2: (%d, %d)\n", ponto2.x, ponto2.y);

    return 0;
}