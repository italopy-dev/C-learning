#include <stdio.h>

void imprimeimpar(int); //ASSINATURA

void imprimepar(int x) {
    if (x % 2 != 0) {
        imprimeimpar(x);
    } else {
        printf("Eh par\n");
    }
}

void imprimeimpar(int x) {
    if (x % 2 == 0) {
        imprimepar(x);
    } else {
        printf("Eh impar\n");
    }
}

int main() {
    imprimepar(3);
    imprimeimpar(4);
    return 0;
}

//A assinatura de uma funçao define o nome da funçao e os tipos dos parametros
//que ela recebe. 
//é util para chamar uma funçao antes mesmo do compilador chegar nela

/*assinaturas podem ser guardadas em arquivos .h
e só importadas com o '#include <arquivo.h>*/