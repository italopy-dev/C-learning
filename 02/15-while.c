#include <stdio.h>


int main() {
    int o = 1;
    while (o <= 10) {
        printf("%d\n", o);
        o++;
    }

    return 0;
    
}

/*while é um "enquanto". enquanto a condição entre parenteses for verdadeira,
executa oque está entre as chaves*/

//"break" tambem serve pra forçar o fim da execução do loop
//"continue" ignora o resto do codigo e já vai direto pra proxima rodada