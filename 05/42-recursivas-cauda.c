#include <stdio.h>


//NÃO É DE CAUDA
int fatorial(int n) {
    if (n > 1) {
        return n * fatorial(n-1);
    }
}

int main() {
    fatorial(9);
    return 0;
}

//CAUDA
int fatorial_cauda(int n, int acumulador) {
    if (n==0 || n==1) {
        return acumulador;
    }
    return fatorial_cauda(n - 1, n * acumulador);
}

//CAUDA: a chamada recursiva é a ultima operação da funcão.
//NÃO CAUDA: há operações após o retorno da chamada recursiva

//A recursão em cauda pode ser otimizada pelo compilador
//reutilizando o quadro da função e reduzindo o uso da pilha