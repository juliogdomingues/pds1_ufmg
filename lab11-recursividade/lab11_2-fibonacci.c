#include <stdio.h>

int fibonacci (int num) {
    int resultado = 0;
    if (num == 0) resultado = 0;
    else if (num == 1) resultado = 1;
    
    else if (num > 1) resultado = fibonacci(num-1) + fibonacci(num-2);
    return resultado;
}

int main () {
    int numero;
    scanf("%d", &numero);
    
    printf("%d", fibonacci(numero));
    
    return 0;
}