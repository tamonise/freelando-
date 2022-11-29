#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    char  titulo[25], cliente[25];
    float valorHora, horas;
} Registro;

main ()

{
    setlocale(LC_ALL, "Portuguese");

    int seletorMenu;
    char seletorSubmenu;
    float desconto, horasTotais;

    Registro r;
    Registro registros[100][100];

    do
    {
        //system("cls");
        printf ("1 - Inserir um novo projeto \n");
        printf ("2 - Descubra seu valor hora ideal \n");
        printf ("3 - Calcule o prazo de entrega do projeto \n");
        printf ("4 - Controle o fluxo de trabalho semanal \n");
        printf ("5 - Relat�rios \n");
        printf ("6 - Sair do menu \n");
        scanf ("%d", &seletorMenu);

        switch (seletorMenu)
        {

        case 1 :
            printf("--INSERIR NOVO PROJETO--\n");
            printf("Digite um t�tulo para o seu projeto =\n");
            fflush(stdin);
            gets(r.titulo);
            printf("Digite qual o seu cliente =\n");
            gets(r.cliente);
            printf("Digite o n�mero de horas trabalhadas no projeto= \n");
            scanf("%f", &r.horas);
            printf("Digite o valor da sua hora para esse projeto= \n");
            scanf("%f", &r.valorHora);
            printf("Insira o desconto para o projeto = \n");
            scanf("%f", &desconto);

            if (desconto==100)
            {
                printf ("Voce disponibilizou seu trabalho gratuitamente \n");
            }
            else
            {
                horasTotais = r.valorHora * r.horas;
                desconto = horasTotais / desconto;

                printf ("O projeto nomeado como: %s, para o cliente %s, com o total de %2f horas trabalhadas. Totalizou com desconto um valor de: %2f \n", r.titulo, r.cliente, r.horas, desconto);
            }

            break;

        case 2 :
            printf ("Para calcular o seu valor hora ideal, voce precisa ");
            break;

        case 3 :
            break;

        case 4 :
            break;

        case 5 :

            do
            {
                printf("Relatorios: escolha a opcao desejada: \n");
                printf("a - Exibir relatorio de renda semanal\n");
                printf("b - Exibir relatorio de renda mensal\n");
                printf("c - Exibir o projeto mais extenso\n");
                printf("d - Exibir o projeto menos extenso\n");
                printf("e - Exibir o projeto com maior receita\n");
                printf("f - Exibir o projeto com menor receita\n");
                printf("g - Voltar para o menu anterior\n");
                fflush(stdin);
                scanf ("%c", &seletorSubmenu);

                switch (seletorSubmenu)
                {
                case 'a':
                    printf("a) Exibir relatorio de renda semanal\n");
                    break;

                case 'b':
                    printf("b) Exibir relatorio de renda mensal\n");
                    break;

                case 'c':
                    printf("c) Exibir o projeto mais extenso\n");
                    break;

                case 'd':
                    printf("d) Exibir o projeto menos extenso\n");
                    break;

                case 'e':
                    printf("e) Exibir o projeto com maior receita\n");
                    break;

                case 'f':
                    printf("f) Exibir o projeto com menor receita\n");
                    break;

                default:
                    printf ("Voce nao digitou uma opcao v�lida na guia relat�rios \n");
                    break;
                }
            }
            while (seletorSubmenu != 'f');
            break;

        default:
            printf ("Voce nao digitou uma opcao valida no menu \n");
            break;
        }
    }
    while (seletorMenu != 6);
}
