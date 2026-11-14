//FUNCAO RECURSIVA QUE VE SE UM NUMERO E PRIMO

#include <stdio.h>

int verificador(int n, int d) {
    if (d == 1) {
        return 1; 
    } else if (n % d == 0) {
        return 0;
    }

    return verificador(n, d - 1);

}

int main() {
    int resultado = verificador(9, 8);
    printf("%d", resultado);
    return 0;
}