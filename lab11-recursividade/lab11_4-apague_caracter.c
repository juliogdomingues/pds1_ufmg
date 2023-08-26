#include <stdio.h>
#include <stdlib.h>

void deleta_caractere (char frase[], char caractere, int indice_frase, char nova_frase[], int contador) {
/*
    // Debbug
    printf("frase: %s\n", frase);
    printf("caractere: %c\n", caractere);
    printf("tamanho: %ld\n", tamanho);
    printf("nova_palavra: %s\n", nova_palavra);
    printf("contador: %i\n", contador);
*/
    if (frase[indice_frase] == '\0') {
        nova_frase[contador] = '\0';
        return;
    }
    
    else if (frase[indice_frase] != caractere) {
        nova_frase[contador] = frase[indice_frase];
        contador++;
        }
    
    deleta_caractere(frase, caractere, ++indice_frase, nova_frase, contador);
}

int main () {
    char frase[10000];
    fgets(frase, 10000, stdin);
    
    char caractere;
    scanf("%c", &caractere);
    
    char nova_frase[10000];

    deleta_caractere(frase, caractere, 0, nova_frase, 0);

    printf("%s", nova_frase);
    
    return 0;
}