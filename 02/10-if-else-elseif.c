/*Não existe booleanos(True, False) em C.
para a linguagem, 0 é falso e todos diferentes dele sao verdadeiros.
mas os operadores retornam 1 para verdadeiro e 0 para falso.
mas tambem podemos usar 'false' e 'true'.*/



#include <stdio.h>

int main() {
    int g;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &g);

    if (g > 0) {
        printf("eh positivo\n");
    } else if (g < 0) {
        printf("eh negativo\n");
    } else {
        printf("eh zero\n");
    }

    return 0;
}

/*if: vê se oque esta entre parenteses é verdadeiro, se for,
executa oque está entre as chaves*/

/*else if: mesma função que o if, pode ter varios 'else if' depois de um 'if',
*/

/*else: é o 'senão', se nenhuma das condições do 'if' e dos 'else if'
forem verdadeiras, oque está nas chaves do 'else' é executado.*/