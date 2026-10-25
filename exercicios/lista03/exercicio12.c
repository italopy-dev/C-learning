//MOSTRA O NUMERO DA SEQUENCIA DE FIBONACCI DE ACORDO COM A POSIÇÃO

#include <stdio.h>

int main() {
    int n;
    printf("Digite o indice que quer saber o numero: ");
    scanf("%d", &n);

    int anterior = 0;
    int atual = 1;
    int proximo = 2;

    for (int i = 1; i <= n; i++) {
        proximo = atual + anterior;
        anterior = atual;
        atual = proximo;
        
    }

    printf("o numero da posicao %d eh: %d", n, (atual - anterior));

    

    return 0;
}