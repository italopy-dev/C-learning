#include <stdio.h>
#include <stdlib.h>

int main() {
    int *x = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        x[i] = i + 1;
        printf("x[%d]: %d\n", x[i]);
    }
    x = realloc(x, 3 * sizeof(int));
    for (int i = 0;i < 3; i++) {
        printf("x[%d]: %d\n", x[i]);
    }

    free(x);
    x = NULL;

    return 0;
}

// realloc serve para redimensionar um espaço já alocado
// realloc(ponteiro_antigo, novo_tamanho)