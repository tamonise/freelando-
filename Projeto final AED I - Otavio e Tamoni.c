#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char  titulo[25], cliente[25];
    int   horas;
    float valorHora, horasTotais;
    ;
} registro;

main ()

{
    int seletorMenu, seletorSubmenu;
    registro r; 
    printf ("Boa noite");
    do
    {
        system("cls");
        printf ("1 - Inserir um novo projeto \n");
        printf ("2 - Descubra seu valor hora ideal \n");
        printf ("3 - Calcule o prazo de entrega do projeto \n");
        printf ("4 - Controle o fluxo de trabalho semanal \n");
        printf ("5 - Relatorios \n");
        printf ("6 - Sair do menu \n");
        scanf ("%d", &seletorMenu);

        switch (seletorMenu)
        {

        case 1 :
            printf("Digite um titulo para o seu projeto = \n");
            gets(r.titulo);
            printf("Digite qual o seu cliente = \n ");
            gets(r.cliente);
            printf("Digite o numero de horas trabalhadas = \n");
            scanf("%d", &r.horas);
            printf("Digite o valor da sua hora = \n");
            scanf("%f", &r.valorHora);

            r.horasTotais = r.valorHora * r.horas;
            break;

        case 2 :
        printf ("Para calcular o seu valor hora ideal, voce precisa ")
            break;

        case 3 :
            break;

        case 4 :
            break;

        case 5 :

            do
            {
                system("cls");
                printf("Relatorios: escolha a opcao desejada: \n");
                printf("1 - Exibir relatorio de renda semanal\n");
                printf("2 - Exibir relatorio de renda mensal\n");
                printf("3 - Exibir o projeto mais extenso\n");
                printf("4 - Exibir o projeto menos extenso\n");
                printf("5 - Exibir o projeto com maior receita\n");
                printf("6 - Exibir o projeto com menor receita\n");
                printf("7 - Voltar para o menu anterior\n");
                scanf ("%d", &seletorSubmenu);

                switch (seletorSubmenu)
                {
                case 1:
                    printf("a) Exibir relatorio de renda semanal\n");
                    break;

                case 2:
                    printf("b) Exibir relatorio de renda mensal\n");
                    break;

                case 3:
                    printf("c) Exibir o projeto mais extenso\n");
                    printf("c) Teste\n");
                    printf("c) Testado\n");

                    break;

                case 4:
                    printf("d) Exibir o projeto menos extenso\n");
                    break;

                case 5:
                    printf("e) Exibir o projeto com maior receita\n");
                    break;

                case 6:
                    printf("f) Exibir o projeto com menor receita\n");
                    break;

                case 7:
                    break;

                default:
                    printf ("Voce nao digitou uma opcao valida \n");
                }
            } while (seletorSubmenu != 7);

            break;

        default:
            printf ("Voce nao digitou uma opcao valida \n");
            break;
        }
    }
    while (seletorMenu != 6);
}
