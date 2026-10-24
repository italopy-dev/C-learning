/*STRINGS SÃO ARRAYS DE CARACTERES, UM CONJUNTO DE CARACTERES.
SEMPRE TEM QUE TERMINAR COM '\0'. 
OU SEJA, SE VOCE RESERVAR 5 ESPAÇOS NA MEMORIA, 4 VAO SER PARA OS ITENS, E
1 EXCLUSIVAMENTE PARA O '\0'.*/

#include <stdio.h>

int main() {
    char nome[5];
    nome[0] = 'H';
    nome[1] = 'O';
    nome[2] = 'R';
    nome[3] = 'A';
    nome[4] = '\0';

    printf("%s", nome);
    //PRINTA A PALAVRA 'HORA'

    //segunda forma
    char nome2[] = 'HORA';
    //AQUI NAO PRECISA COLOCAR O ESPAÇO NECESSARIO, E O PROGRAMA COLOCA O '\0'
    
    
    return 0;
}