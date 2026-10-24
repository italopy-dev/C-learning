#include <stdio.h>


int main() {
    int o = 1;
    do {printf("%d\n", o);
        o++;
    } while (o <= 10);

    return 0;
    
}

/*"do-while" ie basicamente "faça tal coisa enquanto certa coisa for verdadeira.
diferente do while comum, o 'do' executa primeiro as instrunções, depois o while
verifica se as condiçoes definidas sao verdadeiras, se sim, repete o programa."*/