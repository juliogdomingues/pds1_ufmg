#include <stdio.h>

int soma (int vetor[], int tamanho_vetor) {
    int resultado = 0;
    if (tamanho_vetor == 1) resultado = vetor[0];
    else if (tamanho_vetor > 1) resultado = vetor[tamanho_vetor-1] + soma(vetor, tamanho_vetor-1);
    return resultado;
}

int main () {
    int tamanho_vetor;
    scanf("%d", &tamanho_vetor);
    
    int vetor[tamanho_vetor];
    for (int i=0; i < tamanho_vetor; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("%d", soma(vetor, tamanho_vetor));
    
    return 0;
}