#include <stdio.h>
#include <stdlib.h>

void media (double vet[], int n, int *i) {
    double soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    double media = soma / n;
    int posicao = 0;
    double prox = vet[posicao];

    for (int i = 1; i < n; i++) {
        if (abs(vet[i] - media) < abs(prox - media)) {
            prox = vet[i];
            posicao = i;
        }
    }
    
    *i = posicao;
}

int main () {
    int n, valor;
    int *i;
    i = &valor;
    
    scanf("%i", &n);
    double vet[n];

    for (int i = 0; i < n; i++) {
        scanf("%le", &vet[i]);
    }    
    
    media(vet, n, i);
    printf("%d\n", valor);
}
