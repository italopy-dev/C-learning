#include <stdio.h>

struct pessoa {
        char nome[50];
        int idade;
        float altura;
    };

int main () {
    struct pessoa p;
    printf("Digite seu nome: ");
    fgets(p.nome, 50, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    printf("Digite sua altura: ");
    scanf(" %f", &p.altura);

    printf("Nome: %s\nIdade: %i\nAltura: %.2f", p.nome, p.idade, p.altura);

    return 0;
}

//PARA DEFINIR O STRUCT TAMBEM PODERIA SER
//struct pessoa p = {"joao", 20, 1.90};