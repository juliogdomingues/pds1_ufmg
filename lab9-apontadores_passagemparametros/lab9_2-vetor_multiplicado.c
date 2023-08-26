#include <stdio.h>

/*
Faça um programa que leia uma vetor que o usuário digitar, calcule a multiplicação deste vetor
por um valor, e depois multiplique novamente o vetor de forma que ele volte a ter os valores
originais. Deve-se definir as funções:
*/

void imprime(int vetor[], int n) {
    for (int i=0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
}

void multiplica(int vetor[], int n, double v) {
    for (int i=0; i < n; i++) {
        vetor[i] *= v;
    }
}

int main () {
    int n;
    scanf("%d", &n);
    
    int vetor[n];
    for (int i=0; i < n; i++) {
        scanf("%i", &vetor[i]);
    }
    
    double multiplicador = 1;
    scanf("%le", &multiplicador);
    
    imprime(vetor, n);
    multiplica(vetor, n, multiplicador);
    imprime(vetor, n);
    multiplica(vetor, n, (1/multiplicador));
    imprime(vetor, n);
    
    return 0;
}
/*
O programa deve funcionar da seguinte forma:
1. Perguntar ao usuário o tamanho do vetor;
2. Solicitar os valores do vetor;
3. Solicitar o valor a multiplicar o vetor;
4. Imprimir os valores do vetor utilizando uma função void imprime (int vetor[], int n);
5. Multiplicar todos os elementos do vetor pelo valor informado pelo usuário, usando a função
void multiplica (int vetor[], int n, double v);
6. Imprimir novamente os valores do vetor utilizando uma função void imprime (int vetor[], int n);
7. Multiplicar todos os elementos do vetor por 1/v utilizando a chamada multiplica (vetor, n, 1/v);
8. Imprimir novamente os valores do vetor utilizando uma função void imprime (int vetor[], int n);
*/