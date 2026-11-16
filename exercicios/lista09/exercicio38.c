// RECEBE UM ARRAY DE PONTEIROS PARA STRUCTS DE CARROS E MOSTRA O MAIS CARO

#include <stdio.h>

typedef struct {
    char nome[50];
    float valor;
    
} Carro;

int main() 
{   
    Carro a = {"Ford", 50}, b = {"Chevrolet", 200.5}, c = {"Honda", 100.7};
    Carro *p[3] = {&a, &b, &c};

    float maior = 0;

    for (int i=0; i < 3; i++) {
        if (p[i]->valor > maior) {
            maior = p[i]->valor;
        }
    }

    for (int i = 0; i<3; i++) {
        if (p[i]->valor == maior) {
            printf("%s", p[i]->nome);
            break;
        }
        
    }
    
    return 0;
}