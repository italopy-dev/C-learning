//A FUNCAO RECEBE UM INT E UMA STRING, E IMPRIME A STRING A PARTIR
//DA POSICAO DO VALOR DO INT

#include <stdio.h>

char* mostrar(char str[], int i) {
    return &str[i - 1];

}

int main() {
    char *resultado = mostrar("joaozinho", 5);
    printf("%s", resultado);
    
    return 0;

}