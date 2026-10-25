//SE O NUMERO DE UM VALOR DA LISTA X FOR PAR, NA LISTA Y ELE VAI /2
//JÁ SE FOR IMPAR, NA LISTA Y ELE VAI * 3

#include <stdio.h>

int main() {
    int X[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int Y[10];

    for (int i =0; i < 10; i++) {
        if (X[i] % 2 == 0) {
            Y[i] = (X[i] / 2);
        } else {
            Y[i] = (X[i] * 3);
        }
    }
    
    printf("X:");
    for (int o=0; o < 10; o++) {
        printf("%d,", X[o]);
    }

     printf("\nY:");
    for (int e=0; e < 10; e++) {
        printf("%d,", Y[e]);
    }

    return 0;
}