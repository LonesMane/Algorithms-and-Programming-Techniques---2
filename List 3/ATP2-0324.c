#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_FUNCIONARIOS 5

typedef struct {
    char nome[30];
    int idade;
    float salario;
} Funcionario;

int main()
{
    Funcionario funcionarios[QTD_FUNCIONARIOS];
    int opcao, funcionariosAtuais = 0;

    //menu//
    do
    {
        printf("\n=== Controle de Funcionarios ===\n");
    
        printf("1 - Cadastro de Funcionario\n");
        printf("2 - Resumo da equipe\n");
        printf("0 - sair\n");
    
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 1://registrar funcionarios//
                if (funcionariosAtuais < QTD_FUNCIONARIOS)
                {
                    printf("\n=== Funcionario %d ===\n", funcionariosAtuais + 1);

                    printf("Nome: ");
                    fgets(funcionarios[funcionariosAtuais].nome, 30, stdin);

                    printf("Idade: ");
                    scanf("%d", &funcionarios[funcionariosAtuais].idade);
                    getchar();

                    printf("Salario: ");
                    scanf("%f", &funcionarios[funcionariosAtuais].salario);
                    getchar();

                    funcionariosAtuais++;
                }
                    else
                        printf("Maximo de funcionarios!\n");
                break;

            case 2://Imprimir todos os funcionarios//
                printf("=== Funcionarios ===\n");
                for (int i = 0;i < funcionariosAtuais;i++)
                {
                    printf("\nFuncionario %d\n", i + 1);
                    printf("Nome: %s", funcionarios[i].nome);
                    printf("Idade: %d\n", funcionarios[i].idade);
                    printf("Salario: R$ %.2f\n", funcionarios[i].salario);
                }
                break;
            
            case 0://Sair do programa//
                printf("\nEncerrando...\n");
                break;
            
            default://opcao fora do menu//
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}