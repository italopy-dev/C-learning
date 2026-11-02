//FUNCAO QUE RECEBE UMA STRING E UM CARACTERE E MOSTRA AS POSICOES
//DA STRING QUE ESSE CARACTERE APARECE
//SE O CARACTERE NAO ESTIVER NA STRING MOSTRA -1

#include <stdio.h>

void mostrar(char str[], char c) {
    int existe = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[i]) {
            printf("%d ", i + 1);
            existe = 1;
        }
    }
    if (!existe) {printf("%d", -1);}

}

int main() {
    mostrar("joaozinho", 'o');
    return 0;

}