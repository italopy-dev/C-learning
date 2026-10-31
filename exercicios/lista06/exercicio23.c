//VOCE DIGITA 2 COORDENADAS DE UM PLANO CARTESIANO E O PROGRAMA RETORNA A DISTANCIA

#include <stdio.h>
#include <math.h>

typedef struct {
    double X;
    double Y;
} Ponto;

int main() {
    Ponto a, b;
    printf("Digite as duas coordenadas: \n");
    scanf("%lf%lf", &a.X, &a.Y);
    printf("Digite outras duas: ");
    scanf("%lf%lf", &b.X, &b.Y);

    double dX = (b.X - a.X) * (b.X - a.X);
    double dY = (b.Y - a.Y) * (b.Y - a.Y);

    double d = sqrt(dX + dY);

    printf("a distancia eh: %f", d);


    return 0;
}