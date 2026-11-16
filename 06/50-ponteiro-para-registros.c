#include <stdio.h>

typedef struct {
    float x, y;
} Ponto;

int main() 
{
    Ponto ponto = {6.7, 2.1};
    Ponto *p = &ponto;

    printf("(%f, %f)\n", ponto.x, ponto.y);
    printf("(%f, %f)\n", (*p).x, (*p).y);
    printf("(%f, %f)\n", p->x, p->y);


   
   return 0;
}