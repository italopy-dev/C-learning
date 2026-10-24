#include <stdio.h>
#include <stdlib.h>

//atoi - array para inteiro
//atof - array para real
//atol - array para long int

int main () {
    //convertendo string para int
    char i[4] = "100";
    int value = atoi(i);

    //convertendo string para float
    char e[5] = "3.14";
    float value2 = atof(e);

    //convertendo string para long int
    char y[10] = "247865422";
    long int value3 = atol(y);
    
    return 0;
}