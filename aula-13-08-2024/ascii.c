#include <stdio.h>

int main ()
{
    char input;

    printf("Insira o caracter: \n");
    scanf("%c", &input);

    printf("\nValor em octal: %o", input);
    printf("\nValor em decimal: %d", input);
    printf("\nValor em hexadecimal: %x", input);

    return 0;
}