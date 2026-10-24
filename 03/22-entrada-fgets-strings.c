#include <stdio.h>

int main() {
    char frase[50];
    printf("Digita uma frase(min 50 caracteres): \n");
    fgets(frase, 50, stdin);

    printf("Sua frase foi: %s", frase);
 
    return 0;
}

//'FGETS' é uma funçao padrão e segura para ler strings(pode ser até frases)
//introduzidos pelo utilizador através do teclado, sem risco de buffer overflow.

//o 'scanf' para de ler a string quando tem um espaço, o fgets não.

//estrutura do fgets: fgets(vetor, tamanho, stdin);