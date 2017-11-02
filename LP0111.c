/* AULA DE LABORATORIO DE PROGRAMAÇÃO
 * DIA 01/11/2017
 * LABORATÓRIO 05 - DONALD KNUTH
 * EXERCICIOS SOBRE A LINGUAGEM C
 * OVERVIEW DA LINGUAGEM
 * SLIDES 02 OS EXERCICIOS (DISPONÍVEL NO AVA)
 * EXERCICIOS E SOLUÇÕES ORGANIZADOS EM FORMA DE MENU
 * */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float HORA = 19.50;
const float PORCENTUAL = 0.05;

int main()
{
	int resp;

	//COMEÇO DA AULA, DEMONSTRATIVO

	/*char ch;

	ch = getchar();

	if (ch == 'p') {

			printf("Voce digitou a tecla p \n");

	}*/

	/*float a, b, m;

	printf("\n Informe a primeira nota obtida: ");
	scanf("%f", &a);
	printf("\n Iforme a segunda nota obtida: ");
	scanf("%f", &b);

	m = (a + b) / 2;

	if (m >= 7) {

		printf("\n Aprovado \n");
	}
	else {
		printf("\n Reprovado \n");
	}
	return 0;*/

	printf("\t\t-----------------------------------------------------------------------------------\n\n");
	printf("\t\tLISTA DOS EXERCICIOS DO DIA 01/11/2017\n\n");
	printf("\t\tESCOLHA UMA DAS OPCOES ABAIXO PARA EXECUTAR O EXERCICIO\n\n\n");
	printf("\t\tEXERCICIO 1 - MAIOR DE DOIS NUMEROS\n\n");
	printf("\t\tEXERCICIO 2 - ANO BISSEXTO\n\n");
	printf("\t\tEXERCICIO 3 - SALARIO POR HORAS\n\n");
	printf("\t\tEXERCICIO 4 - REAJUSTE SALARIAL\n\n");
	printf("\t\tEXERCICIO 5 - VERDADEIRO OU FALSO\n\n");
	printf("\t\tEXERCICIO 6 - SOBRE TRIANGULOS\n\n");
	printf("\t\tEXERCICIO 7 - SITUACAO DO ALUNO\n\n");
	printf("\t\tEXERCICIO 8 - EQUACAO DE SEGUNDO GRAU\n\n");
	printf("\t\tEXERCICIO 9 - PESO IDEAL\n\n");
	printf("\t\tEXERCICIO 10 - PERFIL\n\n");
	printf("\t\t-----------------------------------------------------------------------------------\n\n\t\t");
	scanf("%i", &resp);
    system("cls");

	switch (resp)
	{

        case 1: {

            //Exercicio 01 - MAIOR ENTRE DOIS NÚMEROS

            /*
             * 1. Dados dois números distintos, informe qual dele é o maior.
             */

            int a, b;

            printf("Digite um numero qualquer\n\n\n");
            scanf("%i", &a);
            printf("Digite outro numero qualquer\n\n\n");
            scanf("%i", &b);

            if (a > b) {

                printf("\n\nO valor de b %i", a);
                printf(" e maior que b %i", b);

            }
            else if (b > a) {

                printf("\n\nO valor de b %i", b);
                printf(" e maior que a %i", a);

            }
            else {

                printf("\n\nO valor de ambos e igual");

            }
            break;

        }
        case 2: {

            //Exercicio 02 - ANO BISSEXTO

            /*
             2. Dado um ano, informe se ele é ou não bissexto. Dica: um ano é bissexto se é divisível por 4  mas não por 100.
             */

            int ano;

            printf("Digite um ano qualquer\n");
            scanf("%i", &ano);

            if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) {

                printf("\n\nAno Bissexto");

            }
            else {

                printf("\n\nO ano nao e bissexto");

            }
            break;

        }
        case 3: {

            //Exercicio 03 - SALARIO EQUIVALANTE A HORAS TRABALHADAS

            /*
            3. Numa empresa paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% dos salários acima de R$ 1500,00.
            Dado o número de horas trabalhadas por um funcionário, informar o valor do seu salário líquido.
            */

            float salario, salarioLiquido;
            int horas;

            printf("Quantas horas voce trabalhou?\n\n");
            scanf("%i", &horas);

            salario = horas * HORA;

            if (salario > 1.500) {

                salarioLiquido = (salario - (salario * 0.1));

                printf("Seu salario liquido sera de %.2f", salarioLiquido);
                printf("\nAbateu de imposto sobre seu salario %.2f", salario-salarioLiquido);

            }
            break;

        }
        case 4: {

            //EXERCICIO 04 - REAJUSTE SALARIAL

            /*
            4. Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários.
            Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$ 750,00.
            Dado o valor do salário de um funcionário, informar para quanto ele será reajustado.
            */

            float salario, salarioAjust;

            printf("Digite o seu salario para calcular o reajuste\n");
            scanf("%f", &salario);

            salarioAjust = salario * PORCENTUAL;

            if (salario <= 750) {

                salarioAjust += salario + 100;
                printf("\nSeu novo salario sera de: %.2f", salarioAjust);

            }
            else {

                salarioAjust += salario;
                printf("\nSeu novo salario sera de: %.2f", salarioAjust);

            }
            break;

        }
        case 5: {

            //EXERCICIO 05 - VERDADEIRO OU FALSO

            /*
            5.Codiﬁque uma instrução para exibir valores lógicos como true e false.
            Para o valor 0 deve aparecer false e para qualquer outro, true.
            */

            int bool;

            printf("Digite um valor qualquer\n\n");
            scanf("%i", &bool);

            printf("\n Zero = %s", bool == 0 ? "false" : "true"); //FUNCIONA DENTRO DE FUNÇÕES

            //bool == 0 ? printf("\nFALSE") : printf("\nTRUE"); //FORMA DO TERNARIO EM C
            break;

        }
        case 6: {

            //EXERCICIOS 06 - SOBRE TRIÂNGULOS

            /*
                6.Dados três números veriﬁcar se eles podem representar as medidas dos lados de um triângulo e, se puderem, classiﬁcar o triângulo em equilátero, isósceles ou escaleno.
                Para codiﬁcar o programa, devemos lembrar das seguintes deﬁnições:
                Para que três números representem os lados de um triângulo é necessário que cada um deles seja menor que a soma dos outros dois.
                Um triângulo é equilátero se tem os três lados iguais, isósceles se tem apenas dois lados iguais e escaleno se tem todos os lados distintos.
            */

            float a, b, c;

            printf("----------------------------------------------------------\n");
            printf("\t\tClassifica Triangulo");
            printf("\n\t\tDigite as medidas dos lados\n");
            scanf("%f%f%f", &a, &b, &c);
            printf("----------------------------------------------------------\n");

            if (a < (b + c)) {

                if (b < (a + c)) {

                    if (c < (a + b)) {

                        if ((a == b) && (a == c)) {

                            printf("\n\t\tE um triangulo equilatero!\n");
                            printf("\t\tIsso e, todos os lados sao iguais\n\n");

                        }
                        else if ((a == b) || (a == c) || (b == c)) {

                            printf("\n\t\tE um triangulo isosceles!\n");
                            printf("\t\tIsso e, dois lados sao iguais\n\n");

                        }
                        else {

                            printf("\n\t\tE um triangulo escaleno!\n");
                            printf("\t\tIsto e, todos os lados sao diferentes\n\n");

                        }

                    }
                    else {

                        printf("\n\n\t\tNAO E UM TRINAGULO!\n\n");

                    }

                }
                else {

                    printf("\n\n\t\tNAO E UM TRINAGULO!\n\n");

                }

            }
            else {

                printf("\n\n\t\tNAO E UM TRINAGULO!\n\n");

            }
            break;

        }
        case 7: {

          //EXERCICIOS 07 - SITUAÇÃO DO ALUNO

            /*
            7.Numa faculdade, os alunos com média pelo menos 7,0 são aprovados, aqueles com média inferior a 3,0 são reprovados e os demais ﬁcam de recuperação.
            Dadas as duas notas de um aluno, informe sua situação.
            */

            float notas[4]; //NÃO HÁ NECESSIDADE DE USAR VETOR PODE-SE CRIAR UMA VARIAVEL PARA CADA NOTA, DÁ NA MESMA
            float soma = 0, media = 0;
            int i;

            for (i = 0; i < 4; i++) {

                printf("\t\tDigite a nota do aluno\n\n\t\t");
                scanf("%f", &notas[i]); //PARA ACESSAR CADA LOCAL DO VETOR É NECESSÁRIO INFORMAR A POSIÇÃO DE MEMÓRIA
                system("cls");

                soma += notas[i];
            }

                media = soma / 4;


            if (media >= 7.0) {

                printf("\n\n\t\tAPROVADO!!!\n\n");

            }
            else if (media >= 3.0) {

                printf("\n\n\t\tVOCE FICOU DE RECUPERACAO!!!\n\n");

            }
            else {

                printf("\n\n\t\tVOCE FOI REPROVADO!!!\n\n");

            }
            break;

        }
        case 8: {

            //EXERCICIO 08 - EQUAÇÃO DE SEGUNDO GRAU

            /*
            8.Dados os coeﬁcientes (a≠0, b e c) de uma equação do 2o grau, calcule e informe suas raízes reais, usando a fórmula de Báskara a seguir:
            x1,2 = -b +- raiz(b2 -4 * a * c) / 2 * a
            */


            float a, b, c, d;
            float x1 = 0,
                  x2 = 0;

            printf("\t\tDigite o coefiientes a\n\n\t\t");
            scanf("%f", &a);
            printf("\t\t\nDigite o coefiientes b\n\n\t\t");
            scanf("%f", &b);
            printf("\t\t\nDigite o coefiientes c\n\n\t\t");
            scanf("%f", &c);


            if (a != 0) {

                d = (b * b) - 4 * a * c;

                if (d > 0) {

                    x1 = (-b + sqrt(d)) / (2 * a);
                    x2 = (-b - sqrt(d)) / (2 * a);

                    printf("\n\n\t\tAs raizes da equacao sao: x1 = %.2f e x2 = %.2f\n\n\t\t", x1, x2);
                }
                else if (d == 0) {

                    x1 = (-b + sqrt(d)) / (2 * a);
                    printf("\n\n\t\tAs raizes da equacao sao: x1 = %.2f e x2 = %.2f\n\n\t\t", x1, x2);

                }
                else {

                    printf("\n\n\t\tNAO EXISTE RAIZ DE DELTA NEGATIVO!\n\n");

                }

            }
            else {

                printf("\n\n\t\tNAO HA RAIZES REAIS QUANDO A E MENOR QUE 0!!!\n\n");

            }
            break;

        }
        case 9: {

            //EXERCICIO 09 - PESO IDEAL

            /*
                9.Dados a altura e o sexo de uma pessoa, determine seu peso ideal de acordo com as fórmulas a seguir:
                para homens o peso ideal é 72.7*altura − 58
                para mulheres o peso ideal é 62.1*altura − 44.7
            */


            float altura;
            char sexo;

            printf("\t\tDigite a sua altura\n\n\t\t");
            scanf("%f", &altura);
            system("cls");
            fflush(stdin); //LIMPA O SCANF
            printf("\t\tQual o seu sexo? M ou F\n\n\t\t");
            scanf("%c", &sexo);
            system("cls");

            switch (sexo)
            {
                case 'M': {

                    printf("\t\tO seu peso ideal e: %.2f kg", (72.7 * altura) - 58);
                    printf("\n\n");
                    break;
                }
                case 'm': {

                    printf("\t\tO seu peso ideal e: %.2f kg", (72.7 * altura) - 58);
                    printf("\n\n");
                    break;
                }
                case 'F': {

                    printf("\t\tO seu peso ideal e: %.2f kg", (62.1 * altura) - 44.7);
                    printf("\n\n");
                    break;
                }
                case 'f': {

                    printf("\t\tO seu peso ideal e: %.2f kg", (62.1 * altura) - 44.7);
                    printf("\n\n");
                    break;
                }
            }
            break;

        }
        case 10: {

           //EXERCICIO 10 - PERFIL DA PESSOA

            /*
            10.O perﬁl de uma pessoa pode ser determinado a partir da sua data de nascimento, conforme exempliﬁcado a seguir.
            Dada uma data de nascimento, informe o perﬁl correspondente.
            */


            int diames, ano;
            int soma = 0;

            printf("\t\tEntre com o dia e o mes do seu nascimento (apenas numeros)\n\n\t\t");
            scanf("%i", &diames);
            system("cls");
            printf("\t\tAgora digite o ano do seu nascimento por extenso (ex. 1998)\n\n\t\t");
            scanf("%i", &ano);
            system("cls");

            soma = diames + ano;

            switch ((soma / 100 + soma % 100) % 5)
            {
                case 0: {
                    printf("\n\n\t\tSeu perfil e timido!\n\n");
                    break;
                }
                case 1: {
                    printf("\n\n\t\tSeu perfil e sonhador!\n\n");
                    break;
                }
                case 2: {
                    printf("\n\n\t\tSeu perfil e paquerador!\n\n");
                    break;
                }
                case 3: {
                    printf("\n\n\t\tSeu perfil e atraente!\n\n");
                    break;
                }
                case 4: {
                    printf("\n\n\t\tSeu perfil e irresistivel!\n\n");
                    break;
                }
            }
            break;

        }
        default: {

            system("cls");
            printf("\t\tVOCE DIGITOU UMA OPCAO INVALIDA\n\n");

        }
	}

	//SWITCH CASE DEMONSTRATIVO

	/*int n;
	printf("\nDigite um numero: ");
	scanf("%i", &n);

	switch (n)
	{
		case 1: printf("%c", 'A'); break;
		case 2: printf("%c", 'E'); break;
		case 3: printf("%c", 'I'); break;
		case 4: printf("%c", 'O'); break;
		default: printf("%c", '#'); break;
		case 5: printf("%c", 'U'); break;
	}

		printf("%c\n", '.');*/

	system("pause");
	return 0;

}
