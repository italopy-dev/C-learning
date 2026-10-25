//CALCULA MEDIA DOS NUMEROS ATE O USUARIO DIGITAR 0

#include <stdio.h>

int main() {
    float n = 1;
    float soma = 0;
    int contador = 0;

    while (n != 0) {
        printf("Digite um numero: \n");
        scanf("%f", &n);
        if (n != 0) {
            soma += n;
            contador++;
        }

    }
    printf("A media eh: %.2f", soma/contador);

    return 0;
}