//PROGRAMA QUE LE 3 NUMEROS E CALCULA A MEDIA

#include <stdio.h>

int main() {
    float a; 
    float soma = 0;
    float media;
    int contador = 3;
    while (contador != 0) {
        printf("Digite um numero: \n");
        scanf(" %f", &a);
        soma += a;
        contador--;
    }
    media = soma/3;
    printf("A media eh %.2f\n", media);
    return 0;
}
