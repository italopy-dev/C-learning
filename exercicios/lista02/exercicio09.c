//VOCE DIGITA UM NUMERO DE 1 A 7 E O PROGRAMA MOSTRA O DIA

#include <stdio.h>

enum Semana {domingo=1, segunda=2, terca=3, quarta=4, quinta=5,
sexta=6, sabado=7};

int main() {
    enum Semana dia;
    printf("Digite um dia da semana(0 a 7): \n");
    scanf("%d", &dia);

    switch (dia) {
        case domingo:
        printf("Domingo!\n");
        break;
        case segunda:
        printf("Segunda!\n");
        break;
        case terca:
        printf("Terca!\n");
        break;
        case quarta:
        printf("Quarta!\n");
        break;
        case quinta:
        printf("Quinta!\n");
        break;
        case sexta:
        printf("Sexta!\n");
        break;
        case sabado:
        printf("Sabado!\n");
        break;

        default:
        printf("Dia invalido!\n");
    }

    return 0;

}