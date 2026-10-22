#include <stdio.h>

void main() {
    //caractere
    char nome; //caractere padrao
    unsigned char nome1; 
    //inteiro
    short int coisa; 
    int inteiro;        //inteiro padrao    
    long int coisa2;      
    long long int coisa6;   
    unsigned int coisa5;        
    //real
    float numero;      //real padrao
    double coisa3;         
    long double coisa4; 
    //constante
    const int coisa7; 
    //string
    char Nome[] = "Dinossauro";
}

/*o "unsigned" antes de definir a variavel faz com que ela só aceite numeros
positivos(funciona com "char" e "int"). */


/*"short int" diminui a quantidade de bytes que a variavel int pode consomir.
   "long int" pode aumentar a quantidade de bytes que a variavel int  pode
   consomir.

   "double" e "long double" aumentam a quantidade de bytes que a variavel
   float pode consome*/

/*"const" faz a variavel ser constante, que só pode ter um valor.*/