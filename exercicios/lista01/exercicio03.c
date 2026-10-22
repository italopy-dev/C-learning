/*RECEBE UMA IDADE E VERIFICA SE A PESSOA PODE VOTAR E RETORNA 
0 PARA FALSO
1 PARA VERDADEIRO*/

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: \n");
    scanf("%i", &idade);
    int resultado = (idade > 16) ? 1 : 0;
    printf(" %i", resultado);
    return 0;
}