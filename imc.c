#include <stdio.h> //Incluir biblioteca com as funções padrão de entrada e saída de dados
#include <stdlib.h> //Incluir biblioteca para manipulação da memória do computador.
#include <math.h> //Incluir biblioteca com funções matemáticas.

/*
Programa de estudo em C para calcular IMC e peso ideal.
Autor: Uelbert Borges.
Data: Setembro de 2017.
Versão: 1.0
Disponível em: https://github.com/UelbertBorges/Clang/blob/master/imc.c

*/

int main() //Função princpal, tem que estar em todo programa em C.
{
    //Declaração e Inicialização de variavéis.

    float peso, altura, imc, pesoIdeal = 0;
    int alturacm, sexo = 0;

    //Saída e entrada de dados com perguntas e respostas do usuário.

    printf("\nDigite o seu peso \n");
    scanf("%f", &peso); //Em C é preciso usar o & na frente do nome de uma variável para que o compilador consiga encontrar o local da variável na memória.
    printf("\nDigite a sua altura \n");
    scanf("%f", &altura);
    printf("\nDigite o seu sexo (1(M) ou 2(F))\n");
    scanf("%i", &sexo);

    alturacm = altura * 100;
    imc = peso/pow(altura, 2); //pow é uma função da biblioteca math.h

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

        printf("\nVoce está levemente acima do peso ideal! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if ((imc >= 30) && (imc <= 34.9)) {

        printf("\nVoce está com obesidade grau I! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if ((imc >= 35) && (imc <= 39.9)) {

        printf("\nVoce está com obesidade grau II (severa)! \n");
        printf("\nO seu imc e: %.2f\n", imc);
        printf("\nO seu peso ideal e: %.2f\n", pesoIdeal);
        printf("\nVoce esta: %.2f", peso-pesoIdeal);
        printf("kg acima do seu peso ideal\n");
    }
    else if (imc >= 40) {


        printf("\nVoce está com obesidade grau III (morbida)! \n");
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

    return 0; //Toda função em C deve retornar um valor. return 0 é usado comumente para quando a função é executada corretamente.
}
