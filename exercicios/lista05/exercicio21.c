//O USUARIO DIGITA 5 STRINGS E PRINTA A SOMA DE TODAS AS LETRAS DELAS

#include <stdio.h>
#include <string.h>

int main() {
    char matriz[5][10];
    int contador = 0;
    
    for (int i=0;i<5;i++) {
            printf("Digite uma string: \n");
            scanf("%9s", matriz[i]);
            contador += strlen(matriz[i]);    
    }
    printf("a soma de todas as letras de todas as palavras eh: %d\n", contador);
    return 0;
}