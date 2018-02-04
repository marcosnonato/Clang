#include<stdio.h>


int main()
{
int num1, num2;
	
	
	printf("\nDigite um numero: ");
	scanf("%d",&num1);
	printf("\nDigite um numero: ");
	scanf("%d",&num2);
		if(num1<num2)
		printf("\n\tOs numeros digitados na ordem crescente e: %d e %d",num1,num2);
		else
		printf("\n\tOs numeros digitados na ordem crescente e: %d e %d",num2,num1);
		printf("\n\n");

return 0;
}
