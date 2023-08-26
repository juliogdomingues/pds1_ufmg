#include <stdio.h>
#include <stdlib.h>

void soma (int vetor1[], int vetor2[], int vetor_soma[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        vetor_soma[i] = vetor1[i] + vetor2[i];
        
    }
}

int main () {
    int tam;
    scanf("%d", &tam); //tamanho dos vetores
    
    int *vetor1;
    vetor1 = (int *) malloc(tam*sizeof(int));
    
    if(vetor1 == NULL){
        printf("Memória insuficiente");
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor1[i]);
    }

    int *vetor2;
    vetor2 = (int *) malloc(tam*sizeof(int));
    
    if(vetor2 == NULL){
        printf("Memória insuficiente");
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        scanf("%d", &vetor2[i]);
    }

    int *vetor_soma;
    vetor_soma = (int *) malloc(tam*sizeof(int));

    if(vetor_soma == NULL){
        printf("Memória insuficiente");
        return 1;
    }

    soma(vetor1, vetor2, vetor_soma, tam);
    
    for (int i = 0; i < tam; i++) {
        printf("%d\n", vetor_soma[i]);
    }
    
    free(vetor1);
    free(vetor2);
    free(vetor_soma);

    return 0;
}

/*
Para favorecer a consolidação do aprendizado de passagem de parâmetros por
referência e ponteiros, faça um programa em C que realize a soma de dois vetores e
armazene o resultado em um terceiro vetor. Os três vetores devem ser criados na
função main e passados como parâmetro para a função que realizará a soma. Dentro
da função main, você deve imprimir o conteúdo do vetor que contém a soma e depois
liberar a memória utilizada pelos três vetores.
*/