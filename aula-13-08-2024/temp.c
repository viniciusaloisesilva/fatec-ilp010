#include <stdio.h>

int main ()
{
    float tempFh, tempC;

    printf("Insira uma temperatura em Fahrenheit: \n");
    scanf("%f", &tempFh);

    tempC = (tempFh - 32) * (5.0 / 9.0);

    printf("A temperatura convertida em graus Celsius é: %.2f", tempC);

    return 0;
}