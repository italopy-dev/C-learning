#include <stdio.h>

int main () {
    char texto[4];
    int i = 167;
    sprintf(texto, "%d", i);

    printf("O texto agora eh: %s", texto);
    
    return 0;
}

//sprintf converte numeros int ou float para strings facilmente
//sprintf(string, "%d ou %f", numero);