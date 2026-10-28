//PEGA 2 MATRIZES E SOMA ELAS EM UMA NOVA

#include <stdio.h>

int main() {
    int matriz1[3][3] = {{1, 2, 3},{4, 5, 6},{7, 2, 9}};
    int matriz2[3][3] = {{2, 8, 4},{9, 3, 1},{1, 0, 5}};
    int matriz3[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz3[i][j] = (matriz1[i][j]) + (matriz2[i][j]);
            printf("%d ", matriz3[i][j]);
        }
    }
    return 0;
}