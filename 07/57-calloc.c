#include <stdio.h>
#include <stdlib.h>

int main() {
    int *x = (int *) calloc(1, sizeof(int));
    *x = 5;

    free(x);
    x = NULL;

    return 0;
}

//calloc é quase a mesma coisa do malloc, mas os espaços alocados ficam com valor 0
// calloc(quantidade de itens, tamanho do item)