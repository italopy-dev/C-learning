//PEGA 5 STRINGS E ORDENA ELAS DE ACORDO COM A QUANTIDADE DE LETRAS

#include <stdio.h>
#include <string.h>

int main () {
    char matriz[5][20];
    char temp[20];

    for (int a=0;a<5;a++) {
        printf("Digite uma string(max. 19 caracteres): ");
        scanf("%19s", matriz[a]);
    }

    for (int i =0; i<5;i++) {
        for (int j=0; j<4;j++) {
            if ((strlen(matriz[j])) > (strlen(matriz[j+1]))) {
                strcpy(temp, matriz[j]);
                strcpy(matriz[j], matriz[j+1]);
                strcpy(matriz[j+1], temp);
            }
        }
    }
    
    printf("A lista ficou: ");
    for (int e=0;e<5;e++) {
        printf("%s ", matriz[e]);
    }
    return 0;
}