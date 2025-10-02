#include <stdio.h>
#include <string.h>

struct laudo_necroscopico
{
    char nome[30];
    int idade;
    char causa_mortis[50];
    
    //Definindo uma struct aninhada//
    struct data
    {
        int dia;
        char mes[10];
        int ano;
    } data_obito;
};

int main()
{
    struct laudo_necroscopico paciente1;

    //Atribuindo valores à estrutura//
    strcpy(paciente1.nome, "Milko");
    paciente1.idade = 19;
    strcpy(paciente1.causa_mortis, "Suicidio");

    //Atribuindo valores à struct aninhada//
    paciente1.data_obito.dia = 29;
    strcpy(paciente1.data_obito.mes, "Novembro");
    paciente1.data_obito.ano = 2025;

    //Imprimindo os valores//
    printf("Autopsia do paciente: %s\n", paciente1.nome);
    printf("Idade: %d\n", paciente1.idade);
    printf("Causa mortis: %s\n", paciente1.causa_mortis);
    printf("Data do obito: %d de %s de %d\n", paciente1.data_obito.dia, paciente1.data_obito.mes, paciente1.data_obito.ano);

    return 0;
}