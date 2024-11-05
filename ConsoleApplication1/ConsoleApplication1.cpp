/*2- Faça um programa que peça o nome e duas notas e calcule a média.  Ao final, mostre a média calculada*/


#include <stdio.h>

int main(void) {

    float nt1, nt2, nt3, nt4, media;

    printf("Digite sua nota 1: ");
    scanf_s("%f", &nt1);

    printf("Digite sua nota 2: ");
    scanf_s("%f", &nt2);

    printf("Digite sua nota 3: ");
    scanf_s("%f", &nt3);

    printf("Digite sua nota 4: ");
    scanf_s("%f", &nt4);

    media = (nt1 + nt2 + nt3 + nt4) / 4;

    printf("sua media: %.2f", media);

    return 0;
}