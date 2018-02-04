#include <stdio.h>

typedef struct estrutura {
	char nomeproduto[100];
	float valor;
	} Testrutura;

int compara(char s[], char t[])
{
    int i = 0;

    while ((s[i] == t[i]) && (s[i] != '\0'))
        i++;
    return s[i] - t[i]; 
}

void copia(char destino[], char origem[])
{
    int i, j = 0, tamanho;

   for (i=0; origem[i] !='\0'; i++)
		tamanho = tamanho +1;

    while (i >= 0)
    {
        destino[j] = origem[j];
        i--;
        j++;
    }
    destino[j] = '\0';
}

void produtos(Testrutura lista[])
{
    int i;

    for(i = 0; i < 20; i++)
    {
        printf("\nDigite o nome do %do produto: ", (i+1));
        scanf(" %[^\n]s", lista[i].nomeproduto);
        printf("\nDigite o valor do produto: ");
        scanf("%f", &lista[i].valor);   
    }
}

void organiza(Testrutura lista[])
{
    int i, j;
    char aux[255];

    for(i = 0; i < 19; i++)
    {
        for(j = (i + 1); j < 20; j++)
        {
            if(compara(lista[i].nomeproduto, lista[j].nomeproduto) > 0)
            {
                copia(aux, lista[i].nomeproduto);
                copia(lista[i].nomeproduto, lista[j].nomeproduto);
                copia(lista[j].nomeproduto, aux);
            }
        }
    }

    for(i = 0; i < 20; i++)
    {
        if(lista[i].valor < 100)
            lista[i].valor *= 1.05;
    }
}

void exibe(Testrutura lista[])
{
    int i;

  
    for(i = 0; i < 20; i++)
        printf("\n%s %.2f", lista[i].nomeproduto, lista[i].valor);

}

int main()
{
Testrutura lista[20];

produtos(lista);
organiza(lista);
exibe(lista);

return 0;
	}
