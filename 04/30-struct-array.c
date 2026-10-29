#include <stdio.h>

struct pessoa {
        char nome[50];
        int idade;
    };

int main () {
    struct pessoa p[2];
    printf("Digite seu nome: ");
    fgets(p[0].nome, 50, stdin);
    printf("Digite sua idade: ");
    scanf(" %d", &p[0].idade);
    getchar();

    printf("Digite seu nome: ");
    fgets(p[1].nome, 50, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p[1].idade);
    
    printf("\nPESSOA 1: \n");
    printf("Nome: %sIdade: %i\n", p[0].nome, p[0].idade);
    printf("\nPESSOA 2: \n");
    printf("Nome: %sIdade: %i\n", p[1].nome, p[1].idade);

    return 0;
}