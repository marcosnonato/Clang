#include <stdio.h>

int main()
{
	
	int vetor[100];
	int cont=0, i=0, j;

	printf("Para encerrar o programa digite -1.\n\n");
	
	do 
	{
		i=i+1;
		printf("Entre com um número: ");
		scanf("%d", &vetor[i]);
		
		if(vetor[i] ==-1)
			continue;
		
		for (j=0; j<100; j++)
		{
			if((vetor[j]==1) && (vetor[j+1] == 3) && (vetor[j+2]==4))
			{
				printf("%d", cont);
				cont = cont + 1;
				printf("%d", cont);
			}
		}	
	}
	while (vetor[i] != -1);
	printf("Os numeros 1,3,4 aparece nessa ordem %d vezes!\n", cont);	

	return 0;

}
