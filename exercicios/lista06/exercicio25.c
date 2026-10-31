//CLASSIFICADOR DA POSIÇÃO RELATIVA DE DUAS CIRCUNFERENCIAS

#include <stdio.h>
#include <math.h>

typedef struct {
    double X;
    double Y;
    double R;
} Circulo;

int main() {
    Circulo a, b;
    printf("Digite X e Y do centro da circunferencia: ");
    scanf("%lf%lf", &a.X, &a.Y);
    printf("Digite o raio da circunferencia: ");
    scanf("%lf%lf", &a.R);
    printf("Digite X e Y do centro da circunferencia: ");
    scanf("%lf%lf", &b.X, &b.Y);
    printf("Digite o raio da circunferencia: ");
    scanf("%lf%lf", &b.R);
    
    double dx = (b.X - a.X) * (b.X - a.X);
    double dy = (b.Y - a.Y) * (b.Y - a.Y);
    double distancia = sqrt(dx + dy);
    double soma = a.R + b.R;
    
    if (distancia > soma) {
        printf("Circunferencias separadas");
    } else if (distancia == soma) {
        printf("Tangentes");
    } else if (distancia < soma) {
        printf("Secantes");
    }

    return 0;
}