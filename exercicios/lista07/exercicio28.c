//IMPRIME A MULTIPLICACAO DE DUAS MATRIZES 3X3

#include <stdio.h>

void multiplicar(int matriz1[3][3], int matriz2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int multiplicacao = matriz1[i][j] * matriz2[i][j];
            printf("%d ", multiplicacao);
        }
    }
  
}

int main() {
    int matriz01[3][3] = {{10, 20, 30},{40, 50, 60},{70, 80, 90}};
    int matriz02[3][3] = {{10, 20, 30},{40, 50, 60},{70, 80, 90}};

    multiplicar(matriz01, matriz02);
    return 0;

}