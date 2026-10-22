//RETORNA 0 SE -1 NUMERO FOR NEGATIVO, 0 SE FOR ZERO, E 1 SE FOR POSITIVO

#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: \n");
    scanf(" %i", &numero);

    int o = (numero > 0 || numero < 0) ? ((numero > 0) ? 1 : -1) : 0;
    printf("É %i", o);
    return 0;

}