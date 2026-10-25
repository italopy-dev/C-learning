//VE SE UMA PALAVRA É UM PALINDROMO

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    printf("Digite uma palavra(minimo 50 caracteres): ");
    scanf("%s", palavra);

    int qtd = strlen(palavra) - 1, j =qtd;
    char palavra_invertida[50];

    for (int i =0; i <= qtd; i++) {
        palavra_invertida[i] = palavra[j];
        j--;
    }

    palavra_invertida[qtd + 1] = '\0';
    if ((strcmp(palavra, palavra_invertida)) == 0) {
        printf("eh palindromo");

    } else {
        printf("nao eh palindromo");
    }

    return 0;
}