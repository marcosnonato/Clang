#include<stdio.h>

int main()
{

	int qtd, i; 
	float vlr, soma;
	soma = 0;
   
   do 
	{
		printf("\nDigite a quantidade: ");
		scanf("%d", &qtd);
		if (qtd <= 0) 
		{
			printf("\nFavor digitar um valor inteiro maior que zero: ");
		}
	} 
   while (qtd <=0); 

		printf("\nDigite os valores:\n");
   
   for(i=0; i<qtd; i++) 		   
   {
      	scanf("%f", &vlr);
      	soma = soma + vlr;
    }	
	printf("\nSoma %.2f", soma);
	   
	   return 0;
	   
}
