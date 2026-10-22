#include <stdio.h>

enum booleano {
    False,
    True = 20
};

int main() {
    enum booleano b = True;
    printf("%d vamos ver se é 20", b);

    return 0;
}

//quando cria uma variavel a partir do enum que recebe uma 'chave',
//retorna o valor dela, o numero inteiro