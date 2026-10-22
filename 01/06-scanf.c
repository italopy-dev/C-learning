#include <stdio.h>

void main() {
    int idade;
    char letra;

    printf("Qual a sua idade?\n");
    scanf(" %i", &idade);
    printf("Qual sua inicial?\n");
    scanf(" %c", &letra);

    printf("Sua inicial eh %c\
    e sua idade eh %i\n", letra, idade);

}