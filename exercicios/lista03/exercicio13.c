//RECEBE 2 NUMEROS E CALCULA O MMC

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite os numeros que quer ver o MMC: ");
    scanf("%d%d", &n1, &n2);

    int mdc;

    for (int i = 1; i <= n1 && i <= n2; i++) {

        if ((n1 % i) == 0 && (n2 % i) == 0) {
            mdc = i;
        } 
    }

    printf("O MMC eh %d", (n1 * n2)/mdc);
    

    return 0;
}