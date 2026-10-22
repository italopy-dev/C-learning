#include <stdio.h>

int main() {
    int numero;
    printf("Digite 1, 2 ou 3: \n");
    scanf("%d", &numero);
    
    switch (numero) {
        case 1:
        printf("Voce digitou %d\n", numero);
        break;
        case 2:
        printf("Voce digitou %d\n", numero);
        break;
        case 3:
        printf("Voce digitou %d\n", numero);
        break;

        default:
        printf("Voce nao digitou nem 1 nem 2 nem 3\n");

    }

    return 0;
}

/*switch é quase a mesma coisa do if/else, ele analisa uma variavel,
e os 'cases' são os possiveis valores da variavel que voce pode colocar.
e default serve como um 'else'.*/

//break: serve para parar de executar o switch

///a variavel que o switch usa deve ser do tipo char, int ou enum