#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, linhas = 3, colunas = 2;
    int **p = (int**) malloc(linhas * sizeof(int*));
    for (i = 0; i < linhas; i++) {
        p[i] = (int*) malloc(colunas * sizeof(int));

        for (j = 0; j < colunas; j++) {
            p[i][j] = i+j;
        }
    }

    free(p);
    return 0;
}