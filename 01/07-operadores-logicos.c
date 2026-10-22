#include <stdio.h>

void main() {

    //E
    int coisa = (5 < 8 && 9 < 2); 
    //retorna falso(0), os os dois precisam ser verdadeiros para ser verdadeiro(1)

    //OU
    int coisa2 = (7 < 2 || 8 > 4);
    //retorna verdadeiro(1), pois pelo menos um é verdadeiro

    //NAO
    int coisa3 = (!5);
    //retorna 0, pois "não é 5"
}