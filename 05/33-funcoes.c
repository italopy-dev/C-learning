#include <stdio.h>

void funcao1() {
    printf("Ola mundo!");
}
//FUNCAO DO TIPO 'VOID' NAO RETORNA NADA
//PARA CHAMA-LA É COM 'funcao1()'

int funcao2(int n) {
    int dobro = n + n;
    return dobro;
}
//RETORNA O DOBRO DO PARAMETRO

int main() {
    int resultado = funcao2(5);
    printf("%d", resultado);
    //PRINTA O DOBRO DO NUMERO 5
    return 0;
}

//a funçao main eh sempre int pois retorna um int para o sistema operacional
//esse numero é chamado de codigo de saida(exit status)

//return 0; indica que o programa encerrou com sucesso
//se retornar outro int, indica algum erro
