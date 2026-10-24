//PEDE PRA VOCE DIGITAR 2 NUMEROS E VE QUAL É O MAIOR OU SE SAO IGUAIS

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: \n");
    scanf(" %d", &n2);

    if (n1 > n2) {
        printf("%d eh maior\n", n1);
    } else if (n2 > n1) {
        printf("%d eh maior\n", n2);
    } else {
        printf("=\n");
    }

    return 0;
}