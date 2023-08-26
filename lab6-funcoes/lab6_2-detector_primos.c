#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long int primo (unsigned long int a);

int main () {
    char entrada[100];
    long int numero;
    while (scanf("%s", entrada) != EOF) {
//    while (fgets(entrada, 100, stdin) != NULL) {

        sscanf(entrada, "%ld", &numero);
        printf("%ld\n", primo(numero));
    }
}
/*
int primo (long int a) {
    if (a < 2) return -1;
    for (long int i=2; i < sqrt(a); i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}
*/

unsigned long int primo (unsigned long int n) {

    if (n < 2) return -1;
    if ((n == 2) || (n == 3)) return 1;
    if ((n % 2 == 0) || (n % 3 == 0)) return 0;
    
    
    for (unsigned long int i = 5; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

/*
6.2. Escreva uma função que identifica se um número inteiro positivo é primo. O aluno deve
implementar uma função que recebe um número inteiro e retorna o valor 0 caso o número
NÃO seja primo e o valor 1 caso o número seja primo. Implemente um programa que utiliza
a função mencionada anteriormente. Considere 2 o menor número primo e o programa deve
considerar como entrada números maiores ou iguais a 2. Para números menores que 2, o
programa deve retornar -1. Implemente um programa que utilize a função pedida, lendo da
entrada padrão uma série de números e imprimindo o resultado conforme função solicitada.
*/