#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[30];
    char palavra2[30];
    int contador = 0;
    
    fgets(palavra1, 30, stdin);
    fgets(palavra2, 30, stdin);
    
    for (int i=0; i < strlen(palavra1)-1; i++) {
        for (int j=0; j < strlen(palavra2)-1; j++) {
            if (palavra1[i+j] == palavra2[j]) contador++;
        }
        if (contador == strlen(palavra2)-1) {
            printf("É substring");
            break;
        }
        contador = 0;
    }

    if (contador == 0) printf("Não é substring");

    return 0;
}