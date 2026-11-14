//FUNCAO RECURSIVA PEGA DOIS INT E RETORNA A MULTIPLICACAO DE TODOS OS INTS ENTRE ELES

#include <stdio.h>

int multiplicar(int n1, int n2) {
    if (n1 > n2) {
        return 1;
    }

    return n1 * multiplicar(n1 + 1, n2);

}


int main() {
    int resultado = multiplicar(3, 8);
    printf("%d", resultado);
    
    return 0;
}