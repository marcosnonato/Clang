#include <stdio.h>

void exibirbinario(int n)
{
    if (n == 0)
    
    return;
    
    exibirbinario(n / 2);
    printf("%d", (n % 2));
}

int main()
{
  
	int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("O valor correspondente em binário é: ");
    exibirbinario(n);
	
	return 0;
}


