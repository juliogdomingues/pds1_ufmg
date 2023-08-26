#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30];
    char palavra_inversa[30];

    fgets(palavra, 30, stdin);

    for (int i=0; i < strlen(palavra); i++) {
        palavra_inversa[i] = palavra[strlen(palavra)-1-i];
    }

    printf("%s", palavra_inversa);

    return 0;
}