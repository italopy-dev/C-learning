#include <stdio.h>
#include <stdlib.h>

int main() {
    // malloc retorna um ponteiro para void, ele precisa ser convertido
    // para o tipo do ponteiro que vai recebe-lo.
    int *x = (int*) malloc(sizeof(int));
    *x = 5;

    free(x); // recebe um endereço e libera o espaço alocado na heap
    x = NULL; // faz o ponteiro apontar para NULL(0)
    
    return 0;
}

/* a função 'malloc()' da lib 'stdlib.h' aloca espaços determinados em bytes no heap
(parte da memoria feita para alocação dinamica).

no exemplo, 'int *x = (int*) malloc(sizeof(int));', a variável ponteiro int
'x' tem como endereço o primeiro espaço de memória do espaço alocado no heap.

'free()' libera o espaço alocado
*/