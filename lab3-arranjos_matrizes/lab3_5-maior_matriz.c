#include <stdio.h>

int main() {
    int linhas, colunas;
    scanf("%d", &linhas);
    scanf("%d", &colunas);
    
    int matriz[linhas][colunas];
    
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    int maior = matriz[0][0];
    
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            if(maior < matriz[linha][coluna]) maior = matriz[linha][coluna];
        }
    }
    
    printf("%d", maior);
    return 0;
}