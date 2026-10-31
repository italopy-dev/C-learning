#include <stdio.h>

void contador() {
    static int numero = 0;

    numero++;
    printf("%d\n", numero);
}

int main() {
    contador();
    contador();
    contador();

    return 0;
}


/*static permite que uma variavel local preserve seu valor entre chamadas
da funcao*/

//sem static, a saida do programa seria 1, 1, 1