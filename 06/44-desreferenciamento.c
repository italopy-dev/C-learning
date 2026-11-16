//o * pode significar:
//declaração de um ponteiro: float *g;
//desreferenciamento de um ponteiro: *g = 10;

#include <stdio.h>

int main() 
{
    float a = 8.0, b = 8.0;
    float *p1 = &a, *p2 = &b;

    float resultado = *p1 * *p2;
    printf("%f", resultado);
    return 0;
}