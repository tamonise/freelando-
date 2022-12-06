#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char  titulo[25], cliente[25], descricao[100];
    float horasprevistas, horasexecutadas, preco, desconto, adicional;

} Registro;


Registro r[20];

main ()

{
    setlocale(LC_ALL, "Portuguese");

    int i, j, seletorMenu;
    char seletorSubmenu;

    Registro r;


    do
    {
        //system("cls");
        printf ("---Seja bem-vindo(a) ao Freelando!---\n");
        printf ("--Escolha a opcao desejada no menu--\n");
        printf ("1 - Inserir um novo projeto \n");
        printf ("2 - Exibir projetos \n");
        printf ("3 - Relatorios\n");
        printf ("4 - Sair\n");
        scanf ("%d", &seletorMenu);

        switch (seletorMenu)
        {

        case 1 :
            printf("--INSERIR NOVO PROJETO--\n");
            /*printf("Digite um titulo para o seu projeto =\n");
            fflush(stdin);
            gets(r.titulo);
            printf("Digite qual o seu cliente =\n");
            gets(r.cliente);
            printf("Digite o numero de horas trabalhadas no projeto= \n");
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
            } */

            break;

        case 2 :
            /*  printf ("Para calcular o seu valor hora ideal, voce precisa preencher alguns dados\n");
              printf ("Quantas horas voce pretende trabalhar por dia?\n");
              scanf ("%d", &horasDia);
              printf ("Qual o seu salario pretendido para o mes\n");
              scanf ("%f", &salarioMes);
              valorHoraideal = (salarioMes / 21) / horasDia;
              printf ("Calculado baseado em 21 dias uteis! \n");
              printf ("O seu valor hora ideal e => %2.5f \n", valorHoraideal); */
            break;



        case 3 :

            do
            {
                printf("RELATORIOS: escolha a opcao desejada: \n");
                printf("a - Media de horas previstas vs horas executadas\n");
                printf("b - Projetos com mais horas prevista vs horas executadas\n");
                printf("c - Projetos com menos horas previstas vs horas executadas\n");
                printf("d - Media de renda semanal\n");
                printf("e - Media de renda mensal\n");
                printf("f - Valor hora ideal vs valor hora atual\n");
                printf("g - Exibir o projeto com menor receita\n");
                printf("h - Voltar para o menu anterior\n");
                fflush(stdin);
                scanf ("%c", &seletorSubmenu);

                switch (seletorSubmenu)
                {
                case 'a':
                    break;

                case 'b':
                    break;

                case 'c':
                    break;

                case 'd':

                    break;

                case 'e':

                    break;

                case 'f':

                    break;

                case 'g':
                    break;

                case 'h':
                    break;

                default:
                    printf ("Voce nao digitou uma opcao valida na guia relatorios \n");
                    break;
                }
            case 4 :
            break;

            }
            while (seletorSubmenu != 'h');
            break;

        default:
            printf ("Voce nao digitou uma opcao valida no menu \n");
            break;
        }
    }
    while (seletorMenu != 4);

}
