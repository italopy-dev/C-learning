//A FUNCAO MOSTRAR RECEBE UM INT E UM CHAR E IMPRIME O CHAR INT VEZES

#include <stdio.h>

void mostrar(int n, char c) {
    for (int i = 0;i<n;i++) {
        printf("%c\n", c);
    }
}

int main() {
    mostrar(5, 'i');
    return 0;
}