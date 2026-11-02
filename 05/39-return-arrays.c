#include <stdio.h>
//nao tem como uma funcao retornar arrays e strings naturalmente

// funcao do tipo int* (retorna um ponteiro para o inicio do vetor)
int *array() {
    //o static impede que a variavel morra no final da funcao
    static int v[3];
    for (int i = 0; i < 3; i++) {
        v[i] = i;
    }
    return v; //retorna apenas o ponteiro do vetor
}

int main() {
    int *array1 = array(); 
    int *array2 = array(); //array2 aponta para o mesmo vetor que array1
    
    //mudando o array2, tambem irá mudar o array1
    array2[0] = 1;
    array2[1] = 1;
    array2[2] = 1;

    for (int i = 0; i < 3; i++) {
        printf("%d ", array1[i]);
    }

    return 0;
}

//se o array ou string for parametro da funcao, pode ser retornado