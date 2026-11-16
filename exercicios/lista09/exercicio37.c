// FUNCAO QUE RECEBE UMA ARRAY DE PONTEIROS FLOAT E O TAMANHO E CALCULA A SOMA DE TUDOS

#include <stdio.h>

float somaPonteiros(float *array[], int tam) {
    float soma = 0;
    for (int i =0; i < tam; i++) {
        soma += *array[i];
    }
    return soma;
}

int main() 
{
    float a=1, b=2.5, c=3, d=4.5, e=5;
    float *p[5] = {&a, &b, &c, &d, &e};

    float resultado = somaPonteiros(p, 5);
    printf("%f", resultado);
    
    return 0;
}