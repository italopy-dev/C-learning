//MULTIPLICA 2 NUMEROS USANDO APENAS SOMA

#include <stdio.h>

int main() {
    int n1, n2;
    int resultado = 0;
    printf("Digite dois inteiros: ");
    scanf("%d%d", &n1, &n2);

    for (int i = 1; i <= n2; i++) {
        resultado += n1;
    }

    printf("%d x %d eh: %d", n1, n2, resultado);

    
    

    return 0;
}