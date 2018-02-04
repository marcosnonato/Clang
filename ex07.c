#include <stdio.h>

int main()
{ 
int n, i, cont=0;
float soma=0.0, media=0.0;

printf("\nInsira a quantidade de alunos: ");
scanf("%d", &n);

float notas[n];
for(i=0; i<n; i++)
{
	printf("\nInsira a nota do %d aluno: ", i+1);
	scanf("%f", &notas[i]);
	
	soma= soma + notas[i];
} 
	media = soma/n;
for(i=0; i<n; i++)
{
	if (notas[i] > 5.0)
		cont=cont+1;
} 
	if (cont==0)
	printf("\nNão há nenhum aluno com nota acima de 5.0");
	else
	printf("\n %d alunos estão com a nota acima de 5.0", cont);
return 0;
}

