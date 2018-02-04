#include <stdio.h>

typedef struct livro{
	char titulo[100];
	char autor[100];
	char editora[100];
	char ano[100];
}tipolivro;
	


int main()
{
  
tipolivro a = {"Java, como programar", "Deitel, H.M.; Deitel, P.J.", "Prentice Hall", "2006"};
  

    printf("Os dados do livro são: %s %s %s %s", a.titulo, a.autor, a.editora, a.ano);
	

   
	return 0;
}
