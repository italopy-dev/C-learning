//DIZ O MENOR E MAIOR NUMERO DO VETOR

#include <stdio.h>

int main() {
    int X[10] = {2, 1, 5, 68, 32, 9, 21, 8, 41, 13};
    int maior = 0;
    for (int i = 0; i < 10; i++) {
        if (X[i] > maior) {
            maior = X[i];
        }
    }
    int menor = maior;
    for (int e = 0; e < 10; e++) {
        if (X[e] < menor) {
            menor = X[e];
        }
        
    }


    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d", menor);

    return 0;
}