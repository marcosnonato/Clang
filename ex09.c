#include <stdio.h>

void vogal (char *frase)
{
int i;
	
	 printf("As vogais presentes na frase são: ");
	
	for(i=0;frase[i]!='\0';i++)
	{	
		switch ( frase[i] )
		{
			case 'A': printf("%c ", frase[i]);break;
			case 'a': printf("%c ", frase[i]);break;
			case 'E': printf("%c ", frase[i]);break;
			case 'e': printf("%c ", frase[i]);break;
			case 'I': printf("%c ", frase[i]);break;
			case 'i': printf("%c ", frase[i]);break;
			case 'O': printf("%c ", frase[i]);break;
			case 'o': printf("%c ", frase[i]);break;
			case 'U': printf("%c ", frase[i]);break;
			case 'u': printf("%c ", frase[i]);break;
	}
	}
}

int main(){

    char frase[100];

    printf("Digite uma frase.\n");
	scanf(" %[^\n]s", frase);

    vogal(frase);

    return 0;
}
