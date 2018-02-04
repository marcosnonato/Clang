#include <stdio.h>

int soma(int x, int y)
{
    if (y == 1)
		return x;
	return x += soma(x,(y-1));
}

int main()
{
  
	int x, y;
    printf("Digite um número: ");
    scanf("%d", &x);
	
	printf("Digite outro número: ");
    scanf("%d", &y);
    
    printf("O resultado é: %d", soma(x,y));
    	
	return 0;
}
