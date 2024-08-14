#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main()
{
    float radius, circumference, area;

    printf("Insira o raio do círculo: \n");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow (radius, 2);

    printf("A área e a circunferência são, respectivamente,: %.2f, %.2f", area, circumference);

    return 0;
}