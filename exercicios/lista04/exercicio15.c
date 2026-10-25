//VERIFICA QUANTAS VEZES UM CARACTERE APARECE NA STRING

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    char caractere;
    printf("Digite uma string(min 50 caracteres): ");
    fgets(palavra, 50, stdin);
    printf("\nDigite um caractere: ");
    scanf("%c", &caractere);


    int len = strlen(palavra);
    if ((palavra[len -1]) == '\n') {
        palavra[len - 1] = '\0';
    }
    
    int contador = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == caractere) {
            ++contador;
        }
        
    }
    printf("\nA letra %c aparece %i vezes na palavra %s", caractere, contador, palavra);

    return 0;
}