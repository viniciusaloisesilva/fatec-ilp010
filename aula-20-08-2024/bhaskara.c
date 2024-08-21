#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, delta, x1, x2;

    printf("Insira os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Não é uma equação do segundo grau.");
    }
    else
    {
        delta = pow(b, 2) - 4 * a * c;

        if (delta < 0)
        {
            printf("Não existem raízes reais.");
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("A única raiz é: %.2f", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("As raízes são: %.2f e %.2f", x1, x2);
        }
    }

    return 0;
}