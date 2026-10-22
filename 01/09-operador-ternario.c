#include <stdio.h>

int main() {
    int a = 6;
    int b = (a > 5) ? 1 : 0;
    printf("%i", b);

    return 0;
}

/*O operador ternario '?' é tipo um if/else de uma linha só
apresenta uma condiçao entre parenteses, no exemplo é (a  >5).
Se ela for verdadeira, ela retorna oque vem depois do '?', no caso, o 1.
Se for falsa, retorna oque vem depois do ':', no caso, o 0.
*/