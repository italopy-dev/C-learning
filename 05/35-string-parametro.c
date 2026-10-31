#include <stdio.h>

int contar(char str[]) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        contador++;

    }
    return contador;
}

int main() {
    char palavra[50];
    scanf("%50s", palavra);
    int qtd = contar(palavra);
    printf("a palavra tem %d letras", qtd);

    return 0;
}