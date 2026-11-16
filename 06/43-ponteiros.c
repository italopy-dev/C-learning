#include <stdio.h>

int main() {

    int a = 9;
    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", &a); //pode ser %x para hexadecimal

    int *p = &a; //*p é um ponteiro para a, *p é o endereço de a
    
    printf("endereco de a em p: %x", p);
    printf("conteudo da variavel cujo o endereco esta em *p: %d", *p);

    return 0;
}

//o * pode significar:
//declaração de um ponteiro: float *g;
//desreferenciamento de um ponteiro: *g = 10;
