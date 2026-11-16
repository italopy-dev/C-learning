#include <stdio.h>

int main() 
{
    int a, *p = &a;
    printf("%x - 1 = %x\n", p, p-1);
    printf("%x + 1 = %x", p, p+1);


    return 0;
}