#include <stdio.h>

/*Em C, um array não é nada mais que um ponteiro para o primeiro
valor de um conjunto de variáveis do mesmo tipo armazenadas em
sequencia*/

// o [] é a junção de duas operações:
// a soma de um ponteiro com um int
// o desreferenciamento do resultado da soma

int main() 
{
    int a[3];
    printf("endereco: %x\n", a);

    *(a + 0) = 20;
    *(a + 1) = 30;
    *(a + 2) = 40;

    printf("%d", a[0]);
    
    return 0;
}