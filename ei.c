#include <stdio.h>
#include <stdlib.h>


/*PRIMEIRA AULA DE C NA FACULDADE
 * DATA: 18/10/2017
 * LABORATÓRIO 05 - DONALD KNUTH
 */

 int main () {
	 
	//int idade;
	char nome[100];
	char str[100];
	/*int soma = 10;
	float money = 2.21;
	char letra = 'A';
	double pi = 2.01E6;
	char a;*/
	char fone[100], cidade[100], cep[10];
	
	
	/*printf("Digite qualquer caractere  ");
	scanf("%c", &a);
	
	printf("\n\n\n %c = %d em decimal", a, a); //Converter de um formato de exibição no caso %c para %d atraves do printf, funciona com qualuqer formato.
	
	printf("\n\n\n %o em octal, %x em hexadecimal", a, a);
	
	printf("Valor da soma: %d", soma);
	printf("\nValor de money: %f", money);
	printf("\nValor de letra: %c", letra);
	printf("\nValor de pi: %e", pi);
	
	printf("\n\n\nMostra localização de memória das variáveis\n");
	printf("\nVariável idade: %p", &idade); 
	printf("\nVariável soma: %p", &soma);*/
	
	printf("\nQual o seu nome?  ");
	scanf("%s", nome);
	printf("\nQual o seu endereço? ");
	scanf("%[^#32]s", str); //Quando for tratar strings, NÃO COLOCAR O &
	//gets(str); 
	/*printf("\n\n\nQual a sua idaade?  ");
	scanf("%i", &idade);*/
	printf("\nQual o seu telefone? ");
	scanf("%s", fone);
	printf("\nQual a sua cidade? ");	
	scanf("%s", cidade);
	printf("\nQual o seu CEP? ");
	scanf("%s", cep);
		
	/*printf("Seu nome é: %s", str);
	printf("\nSua idade é: %i", idade);
	printf(" anos");
	printf("\n\nEssa porra funciona\n");*/
	
	//puts("\nTESTE"); Outra forma de imprimir na tela
	
	return 0;
	
}
