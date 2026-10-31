//VOCE DIGITA O NOME E O VALOR DE UM ACESSORIO E ELE RETORNA

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float valor;

} Acessorio;

int main() {
    Acessorio a;
    printf("Digite o nome do acessorio: ");;
    scanf("%50s", a.nome);


    printf("Digite o valor do acessorio: ");
    scanf("%f", &a.valor);

    printf("Acessorio: %s\nValor: %.2f", a.nome, a.valor);

    return 0;
}