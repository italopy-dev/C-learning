#include <stdio.h>

void mostrar(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", numeros[i]);
    }
}

int main() {
    int valores[] = {10, 20, 30, 40};
    mostrar(valores, 4);

    return 0;
}

//É SEMPRE BOM TER UM PARAMETRO PARA DIGITAR O NUMERO DE INTEIROS DO ARRAY
//POIS A FUNCAO NAO SABE ONDE PARAR NEM O TAMANHO DO ARRAY