//Representar um triângulo que contém os pontos correspondentes aos três vértices//
#include <stdio.h>

struct ponto
{
    float x;
    float y;
};

struct pontos_triangulo
{
    struct ponto pontoA;
    struct ponto pontoB;
    struct ponto pontoC;
};

struct lados_triangulo
{
    float ladoAB;
    float ladoBC;
    float ladoCA;
};

int main()
{
    struct pontos_triangulo retangulo;

    printf("Digite as coordenadas do ponto A (x y): ");
    scanf("%f %f", &retangulo.pontoA.x, &retangulo.pontoA.y);
    printf("\nDigite as coordenadas do ponto B (x y): ");
    scanf("%f %f", &retangulo.pontoB.x, &retangulo.pontoB.y);
    printf("\nDigite as coordenadas do ponto C (x y): ");
    scanf("%f %f", &retangulo.pontoC.x, &retangulo.pontoC.y);

    printf("\nPonto A: (%.2f, %.2f)", retangulo.pontoA.x, retangulo.pontoA.y);
    printf("\nPonto B: (%.2f, %.2f)", retangulo.pontoB.x, retangulo.pontoB.y);
    printf("\nPonto C: (%.2f, %.2f)", retangulo.pontoC.x, retangulo.pontoC.y);

    printf("\nInsira os lados do triangulo:\n");
    struct lados_triangulo lados;
    printf("Lado AB: ");
    scanf("%f", &lados.ladoAB);
    printf("Lado BC: ");
    scanf("%f", &lados.ladoBC);
    printf("Lado CA: ");
    scanf("%f", &lados.ladoCA);

    printf("\nLados do triangulo:\n");
    printf("Lado AB: %.2f\n", lados.ladoAB);
    printf("Lado BC: %.2f\n", lados.ladoBC);
    printf("Lado CA: %.2f\n", lados.ladoCA);
    

    return 0;
}