#include <stdio.h>

int main(void) 
{

int vetorA[5],vetorB[8];
int i, j;
	
	for(i=0;i<5;i++)
	{
		printf("Insira o valor %d do Vetor A\n",i+1);
		scanf("%d",&vetorA[i]);
	}
	
	for(i=0;i<8;i++)
	{
		printf("Insira o valor %d do Vetor B\n",i+1);
		scanf("%d",&vetorB[i]);
	}
	for(i=0;i<8;i++)
	{
		for(j=0;j<5; j++)
		{
			if(vetorB[i]==vetorA[j])
			{
				printf(" Os valores %d correspondem\n",vetorB[j]);
			}
		}
	}
  return 0;
}
