#include <stdio.h>
#include <stdlib.h>

void leitor (int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
}

int main () {
    int n;
    scanf("%d", &n);
    
    int *vetor;
    vetor = (int *) malloc(n*sizeof(int));
    
    if(vetor == NULL){
        printf("Memória insuficiente");
        return 1;
    }

    leitor(vetor, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }
    
    free(vetor);
    return 0;
}

/*
Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Além disso, antes de
finalizar o programa, deve-se liberar a área de memória alocada.
*/