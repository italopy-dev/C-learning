// PROGRAMA QUE SOLICITA 2 NUMEROS E CALCULA A SOMA DELE USANDO PONTEIROS

#include <stdio.h>

int main() 
{
    int a, b;
    printf("digite 2 numeros: ");
    scanf("%d%d", &a, &b);

    int *p1 = &a, *p2 = &b;
    printf("A soma dos 2 numeros eh: %d", *p1 + *p2);
    
    return 0;
}