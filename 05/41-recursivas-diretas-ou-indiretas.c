#include <stdio.h>

//FUNCAO RECURSIVA INDIRETA
void funcaoA(int n) {
    if (n > 0) {
        printf("A: %d\n", n);
        funcaoB(n - 1);
    }
}

void funcaoB(int n) {
    if (n > 0) {
        printf("B: %d\n", n);
        funcaoA(n - 1);
    }
}

//FUNCAO DIRETA
void contar(int n) {
    if (n == 0) {
        return;
    }
    printf("%d", n);
    contar(n-1);
}

/* DIRETA: quando a função chama a si própria diretamente no seu código.
   INDIRETA: quando cria um ciclo entre duas ou mais funcoes*/