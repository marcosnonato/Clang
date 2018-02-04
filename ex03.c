#include <stdio.h>


int main()
{
  
	int num, pot,i,resultado=1;
  
    printf("Informe um numero: ");
    scanf("%d",&num);
    printf("Informe a potencia: ");
    scanf("%d",&pot);
  
    for(i=0; i<pot; i++)
    {
        resultado *= num;
      
        if(pot == 0) 
        {
            resultado = 1;
        }
    }
  
    printf("\n%d elevado a %d = %d\n",num,pot,resultado);
   
	return 0;
}
