#include <stdio.h>
#include <math.h>

int main ()
{
    float weight, height, imc;

    printf("Insira seu peso (em quilogramas) e sua altura (em metros):");
    scanf("%f %f", &weight, &height);

    imc = weight / pow (height, 2);

    printf("Seu imc é: %.2f", imc);

    return 0;
}