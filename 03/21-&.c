/*'&' é tipo o endereço de tal variavel.
se temos uma variavel 'int i;', 'i' é o valor da variavel
e '&i' é o endereço daquela variavel. O scanf por exemplo pede o endereço
da variavel(menos em arrays, pois em arrays a variavel já é o endereço,
por isso nao é necessario usar o '&', a não ser que queira mudar um
único indice específico do array, exemplo: '&str[3]').*/

#include <stdio.h>

int main() {
    char nome[10] = "joaozinho";
    printf("%s\n", &nome[4]);
    //aqui ele nao mostra o valor, ele pega a partir do endereço do nome[4](zinho)
    printf("%c", nome[4]);
    //aqui ele mostra apenas o 'z'.
    
    return 0;
}