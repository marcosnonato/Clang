#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura, imc, pesoIdeal = 0;
    int alturacm, sexo = 0;

    printf("\nDigite o seu peso \n");
    scanf("%f", &peso);
    printf("\nDigite a sua altura \n");
    scanf("%f", &altura);
    printf("\nDigite o seu sexo (1(M) ou 2(F))\n");
    scanf("%i", &sexo);

    alturacm = altura * 100;
    imc = peso/pow(altura, 2);

     if (sexo == "1") {
            pesoIdeal = (alturacm - 100 - ((alturacm - 150) / 4));
        }
        else if (sexo == "2") {
            pesoIdeal = (alturacm - 100 - ((alturacm - 150) / 2));
        }
        else {
            printf("\nVoce digitou um sexo nao reconhecido\n");
        }

    if (imc < 18.5) {
        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\n O seu peso ideal e: %f", pesoIdeal);
    }
    else if ((imc >= 18.6) && (imc <= 24.9)) {

        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\n O seu peso ideal e: %f", pesoIdeal);
    }
    else if ((imc >= 25) && (imc <= 29.9)) {

        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\n O seu peso ideal e: %f", pesoIdeal);
    }
    else if ((imc >= 30) && (imc <= 34.9)) {

        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\n O seu peso ideal e: %f", pesoIdeal);
    }
    else if ((imc >= 35) && (imc <= 39.9)) {

        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\n O seu peso ideal e: %f", pesoIdeal);
    }
    else if (imc >= 40) {


        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\n O seu peso ideal e: %f", pesoIdeal);
    }
    else {


        printf("\nVoce está abaixo do peso ideal! \n");
        printf("\nO seu imc e: %f\n", imc);
        printf("\nO seu peso ideal e: %f", pesoIdeal);
    }

    return 0;
}
