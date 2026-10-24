#include <stdio.h>

//enum dia {domingo=0, segunda=1, terca=2, quarta=3, quinta=4, sexta=5, sabado=6}
enum dia {domingo, segunda, terca, quarta, quinta, sexta, sabado};

int main() {
    enum dia d;
    printf("Digite um dia da semana (0 a 6): \n");
    scanf("%i", &d);

    switch(d) {
        //podemos usar os nomes já que a variavel é do tipo enum
        case domingo:
        printf("Domingo!\n");
        break;
        case segunda:
        printf("Segunda!\n");
        break;
        case terca:
        printf("Terca!\n");
        break;
        case quarta:
        printf("Quarta!\n");
        break;
        case quinta:
        printf("Quinta!\n");
        break;
        case sexta:
        printf("Sexta!\n");
        break;
        case sabado:
        printf("Sabado!\n");
        break;
        default:
        printf("Voce nao digitou nenhum dia");
    }

    return 0;
    
}

//enum é tipo um dicionario python, podendo acessar o valor pelo numero