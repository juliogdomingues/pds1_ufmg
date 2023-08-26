#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *arquivo;
    
    arquivo = fopen(argv[1], "r");
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
7.1. Implemente um programa que conta quantas vezes a letra 'a' aparece em um arquivo
texto. O nome do arquivo deve ser passado para o programa como PARÂMETRO de
entrada.
Ex.: ./contaLetras nomedoarquivo.txt
*/