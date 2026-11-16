// FUNCAO QUE RECEBE UM N E CALCULA O NUMERO EM FIBONACCI COM A POSIÇAO N

#include <stdio.h>

int fibonacci(int *n) {
    unsigned long long int a = 0, b = 1, temp;
    for (int i = 0; i < *n - 1; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return a;
}


int main() 
{   
    int n = 13;
    unsigned long long int resultado = fibonacci(&n);
    printf("%li", resultado);

    
    return 0;
}