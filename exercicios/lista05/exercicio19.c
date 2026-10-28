//PEGA UMA MATRIZ 3X3 E FAZ ELA SÓ QUE TRANSPOSTA

#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int matriz2[3][3];
    
    int contador = 0;

    for (int i =0; i < 3;i++) {
        for (int j = 0; j < 3; j++) {
            matriz2[i][j] = matriz[j][i];
            printf("%d ", matriz2[i][j]);
        }
    }
    return 0;
}