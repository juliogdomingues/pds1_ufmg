#include <stdio.h>
#include <stdlib.h>

int bissexto (int ano);

int main () {
    char entrada[10];
    int numero = 0;
    while (scanf("%s", entrada) != EOF) {
//    while (fgets(entrada, 100, stdin) != NULL) {

        sscanf(entrada, "%d", &numero);
        printf("%d\n", bissexto(numero));
    }
    return 0;
}

int bissexto (int ano) {
    if ((ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0))) return 1;
    else return 0;
}