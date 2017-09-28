#include <stdio.h> //Incluir biblioteca com as fun��es padr�o de entrada e sa�da de dados
#include <stdlib.h> //Incluir biblioteca para manipula��o da mem�ria do computador.
#include <math.h> //Incluir biblioteca com fun��es matem�ticas.

/*
Programa de estudo em C para calcular IMC e peso ideal.
Autor: Uelbert Borges.
Data: Setembro de 2017.
Vers�o: 1.0
Dispon�vel em:

*/

int main() //Fun��o princpal, tem que estar em todo programa em C.
{
    //Declara��o e Inicializa��o de variav�is.

    float peso, altura, imc, pesoIdeal = 0;
    int alturacm, sexo = 0;

    //Sa�da e entrada de dados com perguntas e respostas do usu�rio.

    printf("\nDigite o seu peso \n");
    scanf("%f", &peso); //Em C � preciso usar o & na frente do nome de uma vari�vel para que o compilador consiga encontrar o local da vari�vel na mem�ria.
    printf("\nDigite a sua altura \n");
    scanf("%f", &altura);
    printf("\nDigite o seu sexo (1(M) ou 2(F))\n");
    scanf("%i", &sexo);

    alturacm = altura * 100;
    imc = peso/pow(altura, 2); //pow � uma fun��o da biblioteca math.h

    //Condicional if em C.

     if (sexo == 1) {
            pesoIdeal = (alturacm - 100 - ((alturacm - 150) / 4));
        }
     else if (sexo == 2) {
            pesoIdeal = (alturacm - 100 - ((alturacm - 150) / 2));
        }
     else {
            printf("\nVoce digitou um sexo nao reconhecido\n");
        }

    if (imc < 18.5) {
        printf("\nVoce esta abaixo do peso ideal! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if ((imc >= 18.6) && (imc <= 24.9)) {

        printf("\nVoce esta com o IMC ideal! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if ((imc >= 25) && (imc <= 29.9)) {

        printf("\nVoce est� levemente acima do peso ideal! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if ((imc >= 30) && (imc <= 34.9)) {

        printf("\nVoce est� com obesidade grau I! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if ((imc >= 35) && (imc <= 39.9)) {

        printf("\nVoce est� com obesidade grau II (severa)! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if (imc >= 40) {


        printf("\nVoce est� com obesidade grau III (morbida)! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else {


        printf("\nO seu IMC nao pode ser classificado! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }

    return 0; //Toda fun��o em C deve retornar um valor. return 0 � usado comumente para quando a fun��o � executada corretamente.
}
