/*AULA DE LABORATORIO DE PROGRAMAÇÃO
 * EXERCICIOS SOBRE A LINGUAGEM C
 * OVERVIEW DA LINGUAGEM
 * SLIDES 02 OS EXERCICIOS
 * */

#include <stdio.h>
#include <stdlib.h>

const float HORA = 19.50;
const float PORCENTUAL = 0.05;

int main()
{
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

	//Exercicio 01

	/*int a, b;

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

	}*/

	//Exercicio 02

	/*int ano;

	printf("Digite um ano qualquer\n");
	scanf("%i", &ano);

	if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)) {

		printf("\n\nAno Bissexto");

	}
	else {

		printf("\n\nO ano nao e bissexto");

	}*/

	//Exercicio 03

	/*float salario, salarioLiquido;
	int horas;

	printf("Quantas horas voce trabalhou?\n\n");
	scanf("%i", &horas);

	salario = horas * HORA;

	if (salario > 1.500) {

		salarioLiquido = (salario - (salario * 0.1));

		printf("Seu salario liquido sera de %.2f", salarioLiquido);
		printf("\nAbateu de imposto sobre seu salario %.2f", salario-salarioLiquido);

	}*/


	//EXERCICIO 04

	/*int bool;

	printf("Digite um valor qualquer\n\n");
	scanf("%i", &bool);

	printf("\n Zero = %s", bool == 0 ? "false" : "true"); //FUNCIONA DENTRO DE FUNÇÕES

	//bool == 0 ? printf("\nFALSE") : printf("\nTRUE"); //FORMA DO TERNARIO EM C*/


	//SWITCH CASE

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


	//EXERCICIO 05

	/*float salario, salarioAjust;

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

	}*/


    //EXERCICIOS 06

    /*float a, b, c;

    printf("----------------------------------------------------------\n");
    printf("\t\tClassifica Triangulo");
    printf("\n\t\tDigite as medidas dos lados\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("----------------------------------------------------------\n");

    if (a < (b + c)) {

        if (b < (a + c)) {

            if (c < (a + b)) {

                if ((a == b) && (a == c)) {

                    printf("\n\t\tE um trinagulo equilatero!\n");
                    printf("\t\tIsso e, todos os lados sao iguais\n\n");

                }
                else if ((a == b) || (a == c) || (b == c)) {

                    printf("\n\t\tE um triagulo isosceles!\n");
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

    }*/

    //EXERCICIOS 07

    float notas[4];
    float soma = 0, media = 0;
    int i;

    for (i = 0; i < 4; i++) {

        printf("\t\tDigite a nota do aluno\n\n\t\t");
        scanf("%f", notas[i]);
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


	return 0;

}
