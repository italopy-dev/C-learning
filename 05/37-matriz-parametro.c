#include <stdio.h>

void mostrar(int matriz[][3], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j =0; j < 3; j++) {
            printf("%d\n", matriz[i][j]);
        }
    }
}

int main() {
    int valores[3][3] = {{10, 20, 30},{40, 50, 60},{70, 80, 90}};
    mostrar(valores, 3);

    return 0;
}

//AS LINHAS DA MATRIZ PARAMETRO PODE DEIXAR VAZIO, MAS VOCE TEM QUE 
//COLOCAR UM PARAMETRO APENAS PARA AS LINHAS

//E É OBRIGATORIO TER AS COLUNAS