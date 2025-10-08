#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra, telefone;
    char nome[30];
    FILE *arq;
    arq = fopen("dados_aluno.bin", "wb");

    scanf("%d", &ra);
    scanf("%d", &telefone);
    scanf("%s", nome);

    fwrite(&ra, sizeof(int), 1, arq);
    fwrite(&telefone, sizeof(int), 1, arq);
    fwrite(nome, sizeof(char), 30, arq);
    fclose(arq);
    return 0;
}