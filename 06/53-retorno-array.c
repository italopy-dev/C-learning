#include <stdio.h>

typedef struct {
    int *ar;
    int tam;
} arrayTam;

arrayTam obterarray() {

    arrayTam ar;
    static int array[5];
    ar.ar = array;
    ar.tam = 5;
    return ar;
}

int main() 
{
    arrayTam array = obterarray();
    arrayTam array2 = obterarray(); // é o mesmo array por causa do static

    for (int i = 0; i < array.tam; i++) {
        printf("array[%d]: %d\n", i, array.ar[i]);
    }
    

    return 0;
}