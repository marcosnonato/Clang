/*AULA DE LABORATORIO DE PROGRAMAÇÃO
 * EXERCICIOS SOBRE A LINGUAGEM C
 * OVERVIEW DA LINGUAGEM 
 * */



#include <stdio.h>
#include <stdlib.h>

const float HORA = 19.50;

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
	
	int n;
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
	
		printf("%c\n", '.');
	
		
		
	

}

