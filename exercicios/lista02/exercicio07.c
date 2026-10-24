//VOCE DIGITA UM NUMERO E O PROGRAMA VE SE ELE É PRIMO

#include <stdio.h>

int main() {
    int i;
    printf("Digite um numero de 2 a 10 e direi se ele eh primo\n");
    scanf("%d", &i);

    switch (i) {
        case 2:
        printf("Eh primo\n");
        break;
        case 3:
        printf("Eh primo\n");
        break;
        case 5:
        printf("Eh primo\n");
        break;
        case 7:
        printf("Eh primo\n");
        break;

        default:
        printf("Nao eh primo\n");

    }
    return 0;
}

//Eu poderia usar if/else, mas decidi fazer assim para treinar