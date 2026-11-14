//FUNCAO RECURSIVA QUE INVERTE UMA STRING

#include <stdio.h>

char* inverter(char str1[50], int inicio, int fim) {
    if (inicio >= fim) {
        return str1;
    }
    char temp = str1[inicio];
    str1[inicio] = str1[fim];
    str1[fim] = temp;

    return inverter(str1, inicio + 1, fim - 1);

}

int main() {
    char string[50] = "BANANA";
    inverter(string, 0, 5);
    printf("%s", string);
    
    return 0;
}