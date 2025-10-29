#ifndef MILKO_H
#define MILKO_H

void Milko (int repeticoes)
{
    for(int i = 0;i < repeticoes;i++)
        printf("Eu te amo, Skie! S2\n");
}

int openR (void)
{
    char nome_arquivo[30];
    printf("\n=== Lendo Arquivo ===\n");
    printf("Nome: ");
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';
    fgets(nome_arquivo, 30, stdin);
    FILE *arq;
    arq = fopen (nome_arquivo, "r");
    if (arq == NULL)
    {
        printf("\nErro ao criar o arquivo!\n");
        printf("Encerrando...");
        return 1;
    } else {
        printf("\n=== Arquivo Lido ===\n");
        return 0;
    }
}

int openW (void)
{
    char nome_arquivo[30];
    printf("\n=== Criando Arquivo ===\n");
    printf("Nome: ");
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';
    fgets(nome_arquivo, 30, stdin);
    FILE *arq;
    arq = fopen (nome_arquivo, "w");
    if (arq == NULL)
    {
        printf("\nErro ao criar o arquivo!\n");
        printf("Encerrando...");
        return 1;
    } else {
        printf("\n=== Arquivo Criado ===\n");
        return 0;
    }
}

int openRB (void)
{
    char nome_arquivo[30];
    printf("\n=== Lendo Arquivo ===\n");
    printf("Nome: ");
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';
    fgets(nome_arquivo, 30, stdin);
    FILE *arq;
    arq = fopen (nome_arquivo, "rb");
    if (arq == NULL)
    {
        printf("\nErro ao criar o arquivo!\n");
        printf("Encerrando...");
        return 1;
    } else {
        printf("\n=== Arquivo Lido ===\n");
        return 0;
    }
}

int openWB (void)
{
    char nome_arquivo[30];
    printf("\n=== Lendo Arquivo ===\n");
    printf("Nome: ");
    nome_arquivo[strcspn(nome_arquivo, "\n")] = '\0';
    fgets(nome_arquivo, 30, stdin);
    FILE *arq;
    arq = fopen (nome_arquivo, "wb");
    if (arq == NULL)
    {
        printf("\nErro ao criar o arquivo!\n");
        printf("Encerrando...");
        return 1;
    } else {
        printf("\n=== Arquivo Lido ===\n");
        return 0;
    }
}

#endif