#include <stdio.h>

int main() {
    char str[10] = "Ola mundo";
    printf("%s", &str[4]);
    
      
    return 0;
}

/*ESSE PROGRAMA FAZ COMEÇAR A PRINTAR A STRING A PARTIR DO INDICE DO CARACTERE
DADO, NO CASO, VAI PRINTAR APENAS 'mundo'.*/