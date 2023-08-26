#include <stdio.h>
#define LINHAS 5 // número de linhas da matriz
#define COLUNAS 5 // número de colunas da matriz

int main() {
    char nome_arquivo[100];
    scanf("%s", nome_arquivo);
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) printf("Erro na abertura do arquivo.\n");

    long int matriz1[LINHAS][COLUNAS];
    long int matriz2[LINHAS][COLUNAS];
    
    for (int i=0; i < LINHAS ; i++) {
        for (int j=0; j < COLUNAS; j++) {
            fscanf(arquivo, "%ld", &matriz1[i][j]);
        }
    }
    
    for (int i=0; i < LINHAS ; i++) {
        for (int j=0; j < COLUNAS; j++) {
            fscanf(arquivo, "%ld", &matriz2[i][j]);
        }
    }
    
    for (int i=0; i < LINHAS ; i++) {
        for (int j=0; j < COLUNAS; j++) {
            printf("%ld ", matriz1[i][j] + matriz2[i][j]);
        }
        printf("\n");
    }
    
    fclose(arquivo);
    return 0;
}

        
/*
7.3. Implemente um programa que calcula e apresenta em tela a soma duas matrizes de
dimensão 5x5. Estas matrizes devem estar salvas em um único arquivo binário. Observe
que o arquivo binário que contém as matrizes, também pode ser gerado pelo programa. No
entanto, para fins de teste, o programa deve solicitar o nome do arquivo
*/