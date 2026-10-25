#include <stdio.h>

/*esse código repete oque você digita, usando um while com getchar*/

int main() {
    int letra;

    while ((letra = getchar()) != EOF) {

        putchar(letra);
    }

    printf("fim");


    return 0;
}

//getchar: Lê apenas um caractere de cada vez a partir do canal de entrada(stdin)
//o valor retornado do getchar tem que ser guardado num int

//putchar: escreve um único caractere de forma crua no stdout.

/*EOF: é uma constante que tem o valor de -1, funciona como um sinal de
stop. É o valor especial que o getchar() devolve quando chega ao final dos
dados e já não há nada para ler no canal(stdin ou ficheiro)
Pressionando a tecla crtl + Z e depois a Enter, o comando envia o -1
para o programa e o ciclo while do código para*/