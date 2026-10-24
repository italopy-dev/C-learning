/*ARRAYS SÃO "LISTAS". VOCE DIZ O ESPAÇO NA MEMORIA QUE QUER RESERVAR
(NUMERO DE ITENS DA SUA LISTA), E DEFINE O VALOR DE CADA ESPAÇO.
SÃO ACESSADAS POR POR EXEMPLO 'i[0]'(o primeiro indice sempre é zero e
vai até o numero de espaços que voce definiu -1).*/

#include <stdio.h>

int main() {

    
    int i[4];
    //primeira maneira de definir arrays
    // i[0] = 1;
    // i[1] = 4;
    // i[2] = 9;
    // i[3] = 16;

    //segunda maneira
    //com isso nao precisa definir o espaço que quer reservar
    //pois detecta automaticamente
    int o[] = {1, 4, 9, 16};

    //terceira maneira(serve para esse caso especifico)
    for (int e = 0; e < 4; e++) {
        i[e - 1] = e * e;
    }


    return 0;
}