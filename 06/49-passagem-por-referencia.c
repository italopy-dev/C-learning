#include <stdio.h>

void triplo(int *a) {
    *a = *a * 3;
    printf("funcao triplica a: %d\n", *a);
}

int main() 
{
    int a = 1000;
    triplo(&a);

    
    return 0;
}

//com isso da pra modificar uma variavel de outra função