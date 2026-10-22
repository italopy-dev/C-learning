#include <stdio.h>
#include <stdio.h>

void main() {

    //PRE INCREMENTO
    int coisa = 2;
    printf("%i\n", ++coisa);
    //É o mesmo que "coisa+=1, adicionando 1 no valor da variavel antes de executar

    //POS INCREMENTO
    int coisa2 = 2;
    printf("%i\n", coisa++);
    //Mesma coisa do outro, mas esse so adiciona 1 á variavel depois de executar
}