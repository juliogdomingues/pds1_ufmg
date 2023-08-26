#include <stdio.h>
#include <stdlib.h>

int main () {
    int linhas, colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    
    int ** matriz;
    matriz = (int **) malloc(sizeof(int *)*linhas);
    
    if(matriz == NULL){
        printf("Memória insuficiente");
        return 1;
    }
    
    for (int i=0; i < linhas; i++) {
        matriz[i] = (int *) malloc(sizeof(int)*colunas);
        
        if(matriz[i] == NULL){
            printf("Memória insuficiente");
            return 1;
        }
        
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}

/*
Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos
Faça um programa que aloque uma matriz dinamicamente e depois imprima os
valores da matriz. A matriz deve ser formada por N arrays de tamanhos idênticos, e
cada array deve ter seus valores preenchidos pelo usuário assim que for alocado. Ou
seja, cada array referente a uma linha da matriz deve ser preenchido antes do array
referente à próxima linha ser alocado. Imprima o conteúdo dos vetores e libere a
memória alocada para eles.
*/