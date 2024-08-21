#include <stdio.h>

int main ()
{
    int num;

    printf("Insira o último número da placa do seu carro: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
        case 2:
            printf("O dia de rodízio do seu carro é segunda-feira.");
            break;
        case 3:
        case 4:
            printf("O dia de rodízio do seu carro é terça-feira.");
            break;
        case 5:
        case 6:
            printf("O dia de rodízio do seu carro é quarta-feira.");
            break;
        case 7:
        case 8:
            printf("O dia de rodízio do seu carro é quinta-feira.");
            break;
        case 9:
        case 0:
            printf("O dia de rodízio do seu carro é sexta-feira.");
            break;
        default:
            printf("Número inválido.");
            break;
    }

    return 0;
}