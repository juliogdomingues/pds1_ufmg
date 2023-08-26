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
    
    int matriz_oposta[linhas][colunas];
    
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            matriz_oposta[linha][coluna] = matriz[linha][coluna] * -1;
        }
    }
    
    for (int linha = 0; linha < linhas; linha++) {
        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("%d ", matriz_oposta[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
