#include <stdio.h>

int fatorial(int n) {
    if (n > 1) {
        return n * fatorial(n-1);
    }
}

int main() {
    fatorial(9);
    return 0;
}