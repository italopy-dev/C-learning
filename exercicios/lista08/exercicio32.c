//FUNCAO RECURSIVA QUE CONTA OS CARACTERES DE UMA STRING

#include <stdio.h>

int contar(char str[50], int i) {
    if (str[i] == '\0' || str[i] == '\n') {
        return 0;
    }

    return 1 + contar(str, i + 1);
    
}

int main() {
    char str1[50];
    puts("Digite uma string: ");
    fgets(str1, 50, stdin);
    int resultado = contar(str1, 0);

    printf("%d", resultado);
    return 0;
}