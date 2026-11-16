#include <stdio.h>


int main() 
{
    int a, *p = &a;

    for (int i =0; i < 500; i++) {
        printf("\nindice: %d\n", i);
        printf("endereco: %p\n", p);
        printf("conteudo: %d\n", *p);
        p = p - 1000;
    }
    
    return 0;
}

//o programa vai acessando os endereços de -1000 a -1000
//acessar endereços a cegas pode corromper dados ou causar SementationFault