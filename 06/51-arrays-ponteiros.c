#include <stdio.h>

int main() 
{
    int x = 10;
    int y[2] = {10, 20};

    int *p[3];
    p[0] = x;
    // aponta pra x
    p[1] = y;
    // aponta pra y[0]

    printf("%i", *(p[1] + 1)); // pode ser p[1][1]
    // mostra a segunda posiçao do array y

   return 0;
}