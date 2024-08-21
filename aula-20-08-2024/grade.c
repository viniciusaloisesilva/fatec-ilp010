#include <stdio.h>

int main () {

    int faltas;
    float media;

    printf("Insira a quantidade de faltas e sua média: ");
    scanf("%d %f", &faltas, &media);

    if (faltas > 5) 
    {
        printf("Conceito F.");
    } 
    else 
    {
        if (media < 6)
        {
            printf("Conceito C.");
        }
        else if (media < 7.5)
        {
            printf("Conceito B.");
        }
        else if (media < 9)
        {
            printf("Conceito A.");
        }
        else {
            printf("Conceito E.");
        }
    }

    return 0;
}