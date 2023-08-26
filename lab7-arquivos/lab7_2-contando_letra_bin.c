#include <stdio.h>

int main() {

    char nome_arquivo[100];
    scanf("%s", nome_arquivo);
    FILE *arquivo;
    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) printf("Erro na abertura do arquivo.\n");

    char c;
    int contador = 0;
    
    while ((c = fgetc(arquivo)) != EOF) {
        if (c == 'a') contador++;
    }

    printf("%d", contador);
    fclose(arquivo);
    
    return 0;
}


/*
7.2. Implemente um programa que conta quantas vezes a letra 'a' aparece em um arquivo
binário. O nome do arquivo deve ser solicitado pelo programa.
*/