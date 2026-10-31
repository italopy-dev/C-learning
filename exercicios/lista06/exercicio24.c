//VOCE DIGITA OS PONTOS E RETORNA A ALTURA, PERIMETRO E DIAGONAL DO RETANGULO

#include <stdio.h>
#include <math.h>

typedef struct {
    double X;
    double Y;
} Retangulo;

int main() {
    Retangulo a, b;
    printf("Digite X e Y do ponto superior esquerdo: ");
    scanf("%lf%lf", &a.X, &a.Y);
    printf("Digite X e Y do ponto inferior direito: ");
    scanf("%lf%lf", &b.X, &b.Y);

    double largura = b.X - a.X;
    double altura = a.Y - b.Y;
    double area = largura * altura;
    double perimetro = (2*largura) + (2*altura);

    double dx = (b.X - a.X) * (b.X - a.X);
    double dy = (b.Y - a.Y) * (b.Y - a.Y);
    double diagonal = sqrt(dx + dy);

    printf("Area: %lf\nDiagonal: %lf\nPerimetro: %lf", area, diagonal, perimetro);


    return 0;
}