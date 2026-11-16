#include <stdio.h>


int main() 
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("pp: %x\n", pp); // endereço de pp
    printf("*pp: %x\n", *pp); // valor de pp
    printf("**pp: %i", **pp); // valor do valor de pp

    

    return 0;
}
