#include <stdio.h>

int espaco=0;

typedef struct agenda{
	char nome[30];
	char endereco[100]; 
	char fone[10];
	long int CEP;
	} Tagenda;
	
void add(Tagenda info[])
{
	printf("\nInsira o nome do contato: ");
	scanf(" %[^\n]s", info[espaco].nome);
	printf("\nInsira o endereço do contato: ");
	scanf(" %[^\n]s", info[espaco].endereco); 
	printf("\nInsira o telefone do contato: ");
	scanf(" %[^\n]s", info[espaco].fone); 
	printf("\nInsira o CEP do contato: ");
	scanf("%ld", &info[espaco].CEP); 
	
		printf("\nOs dados são: ");
		printf("\nNome: %s", info[espaco].nome);
		printf("\nEndereço: %s", info[espaco].endereco);
		printf("\nTelefone: %s", info[espaco].fone);
		printf("\nCEP: %ld", info[espaco].CEP);
	
	espaco=espaco+1;
	
	}

void dados(Tagenda info[])
{
long int aux;
int i;

	printf("\n Pesquise seu contato pelo CEP: ");
	scanf("%ld", &aux);
	
	for (i=0; i<=espaco; i++)
	{
		if (info[i].CEP==aux)
		{
		printf("\nOs dados são: ");
		printf("\nNome: %s", info[i].nome);
		printf("\nEndereço: %s", info[i].endereco);
		printf("\nTelefone: %s", info[i].fone);
		printf("\nCEP: %ld", info[i].CEP);
		}
	}
	
	}
	
void lista(Tagenda info[])
{
	
char inicial;
int i;


	printf("\nInforme a letra a ser pesquisada: ");
	scanf(" %c", &inicial);

for (i=0; i<=espaco; i++)
	{
		if (inicial==info[i].nome[0])
		{
		printf("\nNome: %s", info[i].nome);
		
		}
		}
	
	}	
	
int main()
{

int menu;
Tagenda info[100];


do {
	printf("\n1 Adicionar contato");
	printf("\n2 Exibir contato");
	printf("\n3 Exibir lista\n");
	scanf("%d", &menu);
	
	}
while ((menu<1) && (menu>3));

if (menu==1)
{
	add(info);
	main();
	} 
	else if (menu==2)
{	
	dados(info);
	main();
}
else 
{
	lista(info);
	main();
}		
	
	
return 0;
}

