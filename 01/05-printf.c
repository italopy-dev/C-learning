#include <stdio.h>

int main() {
    //caracteres
    char letra = 'a';
    printf("Imprimindo variavel do tipo char: %c\n", letra);

    //inteiros
    int inteiro = 9;
    long int inteiro2;
    printf("Imprimindo variavel do tipo int ou short int: %i\n", inteiro);
    printf("Imprimindo variavel do tipo long int: %li\n", inteiro2);

    //unsigned
    unsigned int inteiro3 = 6;
    unsigned long int inteiro4 = 7;
    printf("Imprimindo variavel do tipo unsigned: %u\n", inteiro3);
    printf("Imprimindo variavel do tipo unsigned long int: %lu\n", inteiro4);

    //reais
    float real = 6.7f;
    long double real2 = 6.02e-23L;
    printf("Imprimindo variavel do tipo float ou double: %f\n", real);
    printf("Imprimindo variavel do tipo long double: %e\n", (double)real2);

    //string
    char nome[] = "Messi";
    printf("Imprimindo variavel do tipo char(string): %s\n", nome);

    //impressao de endereços de memoria
    int a;
    printf("Imprimindo endereço da variavel a: %p\n", &a);
    
    return 0;
}

//no windows, a impressao do long double pode dar problema
//por isso, converti para double a variavel do tipo long double


     