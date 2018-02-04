#include <stdio.h>


int main()
{
	char a, b;

	do 
	{
	printf("\nDigite dois caracteres entre a a z: ");
	scanf("%c %c",&a, &b);
	
	if (a>b)
	printf("\nSomente são aceitos os caracteres em ordem alfabética\n");
	}
	while (a>b);
	
	printf("\nA quantidade de caracteres é: %d", (b-a)-1);
	
	

	
	return 0;
}
