#include <stdio.h>

int main() {
    //puts
    char texto[10] = "Ola mundo";
    puts(texto);
    //ou
     puts("Ola mundo");

    //fputs
    fputs(texto, stdout);
    
    return 0;
}
/*puts: funciona apenas com strings igual um printf, só que mais leve e já
coloca o \n no final automaticamente*/

/*fputs: quase a mesma coisa do puts, mas voce define o destino(stdout ou ficheiro)
e não coloca \n no final*/