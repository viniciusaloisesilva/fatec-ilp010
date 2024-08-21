#include <stdio.h>

int main ()
{
    int num;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    printf("\nO número é %s", num % 2 == 0 ? "par." : "ímpar.");

    return 0;
}