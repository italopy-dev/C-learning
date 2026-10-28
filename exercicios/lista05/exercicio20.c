//VE SE UMA MATRIZ 3X3 É IDENTIDADE(TEM UMA DIAGONAL DE 1s E O RESTO DE 0s)

#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 0, 0},{0, 1, 0},{0, 0, 1}};
    int contador = 0;

    for (int i =0;i < 3;i++) {
        for (int j =0;j < 3;j++) {
            if (i == j) {
                if ((matriz[i][j]) == 1) {
                    contador  += 1;
                }
            } else {
                if ((matriz[i][j]) != 0) {
                    printf("Nao eh matriz identidade");
                    break;
                }
            }

        }
    }
    
    if (contador == 3) {
        printf("matriz identidade");
    }
    
    return 0;
}