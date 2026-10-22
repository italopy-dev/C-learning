//CONVERSAO CENTAVOS PARA REAIS

#include <stdio.h>

int main () {
    float centavos;
    float reais;
    printf("Digite a quantidade de centavos: \n");
    scanf(" %f", &centavos);

    reais = centavos/100;
    printf("R$%.2f", reais);
    return 0;
}