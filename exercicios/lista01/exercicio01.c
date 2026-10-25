//PROGRAMA QUE LE 3 NUMEROS E CALCULA A MEDIA
#include <stdio.h>

int main() {
    float a, b, c;
    float soma = 0;
    float media;
    printf("Digite 3 numeros :");
    scanf("%f%f%f", &a, &b, &c);
    soma = (a + b) + c;
    media = soma/3;
    printf("A media eh %.2f\n", media);

    return 0;
}
