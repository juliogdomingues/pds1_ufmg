#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long int Soma_Primos (long int a);
unsigned long int Primo (unsigned long int n);

int main () {
    char entrada[10000];
    unsigned long int numero;
    while (scanf("%s", entrada) != EOF) {
        sscanf(entrada, "%ld", &numero);
        printf("%ld\n", Soma_Primos(numero));
    }
}

unsigned long int Soma_Primos (long int a) {
    unsigned long int soma = 0;
    long int contador = 0;
    for (long int i = 0; contador < a; i++) {
        if (Primo(i) == 1) {
            soma += i;
            contador++;
        }
    }
    return soma;
}

unsigned long int Primo (unsigned long int n) {

    if (n < 2) return -1;
    if ((n == 2) || (n == 3)) return 1;
    if ((n % 2 == 0) || (n % 3 == 0)) return 0;
    
    
    for (unsigned long int i = 5; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

/*
6.3. Faça uma função para calcular a soma dos N primeiros números primos. O programa
deverá ter as funções “Soma_Primos” e “Primo”, sendo que a primeira será responsável
pela soma dos números que forem primos e a segunda será responsável por verificar se o
número em questão é primo ou não. Implemente um programa que utilize a função pedida,
lendo da entrada padrão uma série de números e imprimindo o resultado conforme função
solicitada.
*/