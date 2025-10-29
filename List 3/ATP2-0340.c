#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
    int x, y, z;
} Ponto;

int main()
{
    Ponto p1;

    //Coletando Informações usando operador '.'//
    printf("\n=== Informacoes do Ponto ===\n");
    printf("Coordenada X: ");
    scanf("%d", &p1.x);
    printf("Coordenada Y: ");
    scanf("%d", &p1.y);
    printf("Coordenada Z: ");
    scanf("%d", &p1.z);

    //Imprimindo Valores usando operador '.'//
    printf("\n=== Ponto 1 ===\n");
    printf("X: %d\n", p1.x);
    printf("Y: %d\n", p1.y);
    printf("Z: %d\n", p1.z);

    return 0;
}