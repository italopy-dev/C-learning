#include <stdio.h>


int main() {
    int i;
    for (i = 0; i<=10; i++) {
        printf("%d\n", i);
    }

  return 0;   
}

/*o 'for' funciona em C como um contador mecânico: voce define o ponto de partida,
a meta final e o tamanho do passo. A cada volta, ele executa a instrução, dá
um passo em frente e verifica se já chegou ao destino.*/

//'i = 0': ponto de partida(pode definir uma variavel dentro do for tambem).
//'i < 5': conição de paragem, se for falso(0), para a execução.
//'i++': o 'passo', avanço mecânico a cada volta.