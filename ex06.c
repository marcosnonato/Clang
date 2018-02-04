#include <stdio.h>
#include <math.h>

float hip (float a, float b);

int main()
{
float hipotenusa, cat1, cat2;

	printf("Digite os valores dos catetos: ");
	scanf("%f%f", &cat1, &cat2);
	
	hipotenusa = hip(cat1, cat2);

	printf("\n\nO valor da hipotenusa e %.1f\n\n", hipotenusa);

}

float hip(float a, float b)
{
float hipo;

	hipo = sqrt (pow (a,2) + pow (b,2));

return hipo;

}
