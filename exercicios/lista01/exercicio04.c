/*VERIFICA SE UM ALUNO PASSOU DE ANO E RETORNA
0 PARA FALSO 
1 PARA VERDADEIRO*/

#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota final: \n");
    scanf(" %f", &nota);

    int resultado = (nota > 6.0) ? 1 : 0;
    printf(" %i", resultado);
    return 0;
}