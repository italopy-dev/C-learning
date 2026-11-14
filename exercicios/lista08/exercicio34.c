//FUNCAO RECURSIVA PEGA VALORES E IMPRIME A SOMA

#include <stdio.h>

typedef struct {

    float valor;

} Produto;

float calcular(Produto array[5], int N, int tamanho) {
    if (N == tamanho) {
        return 0;
    }
    
    return array[N].valor + calcular(array, N+1, tamanho);

}


int main() {
    Produto array[5];
    for (int i = 0; i <5; i++) {
        printf("Digite o valor: ");
        scanf("%f", &array[i].valor);
    }
    float resultado = calcular(array, 0, 5);
    printf("%.2f", resultado);
    
    return 0;
}