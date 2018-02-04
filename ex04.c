#include <stdio.h>

int main()
{

	int n, x, i, resultado=1, soma=0;

	printf("\nDigite um valor inteiro: ");
	scanf("%d", &n);
	printf("\nDigite um valor real: ");
	scanf("%d", &x);
	
	 for(i=0; i<x; i++)
    {
        resultado *= n;
      
        if(x == 0) 
        {
            resultado = 1;
        }
    }
	
	soma = 1 + ((n * resultado) / (n - 1));
	printf("\nO resultado da soma: %d", soma);

return 0;

}

