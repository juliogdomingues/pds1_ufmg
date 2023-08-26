#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_caractere (char frase[], char caractere, unsigned long int tamanho) {
    int contagem = 0;
    
    /*
    // Debbug
    printf("frase: %s\n", frase);
    printf("caractere: %c\n", caractere);
    printf("tamanho: %ld\n", tamanho);
    */
    
    if (tamanho == 1) {
        if (frase[0] == caractere) contagem = 1;
        else contagem = 0;
    }
    
    else if (tamanho > 1) {
        if (frase[tamanho-1] == caractere) contagem = 1 + conta_caractere(frase, caractere, tamanho-1);
        else contagem = conta_caractere(frase, caractere, tamanho-1);
    }
  
    return contagem;
}

int main () {
    char frase[10000];
    char *ptr_frase;
    fgets(frase, 10000, stdin);
    
    char caractere;
    scanf("%c", &caractere);
//    printf("%d", strlen(frase));

    //printf("%c", caractere);
    printf("%d", conta_caractere(frase, caractere, strlen(frase)));
    
    return 0;
}