#include <stdio.h>

int main() 
{
    int x = 10;
    int y = 20;
    int z;

    void *px = &x;
    void *py = &y;

    z = *(int *)px + *(int *)py; // temos que fazer um cast para desreferenciar
    printf("%i", z);

    return 0;
}

// ponteiros vazios podem ser uteis para apontar para varios endereços