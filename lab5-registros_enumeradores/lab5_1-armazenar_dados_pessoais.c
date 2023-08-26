#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    unsigned int idade;
    float salario;
};

int main () {

    struct cadastro cad[4];
    char operacao[100];
    char entrada[100];
    int i = 0;
    char busca[50];
    int contador=0;
    setbuf(stdin, NULL);
    
    do {
        fgets(operacao, 100, stdin);
        operacao[strlen(operacao)-1] = '\0';

        if (!strcmp(operacao, "encerrar")) break;

        fgets(entrada, 100, stdin);
        entrada[strlen(entrada)-1] = '\0';
        
        if (!strcmp(operacao, "inserir") && i >= 4) printf("Espaco insuficiente\n");

        if (!strcmp(operacao, "inserir") && i < 4) {
                sscanf(entrada, "%s %d %f", cad[i].nome, &cad[i].idade, &cad[i].salario);
                //gets(cad[i].nome);
                //gets(cad[i].idade);
                //gets(cad[i].salario);
                printf("Registro %s %d %.2f inserido\n", cad[i].nome, cad[i].idade, cad[i].salario);
                i++;
        }

        if (!strcmp(operacao, "mostrar")) {
            for (int j=0; j < 4; j++) {
                if (!strcmp(entrada, cad[j].nome)) {
                    printf("Registro %s %d %.2f\n", cad[j].nome, cad[j].idade, cad[j].salario);
                    contador++;
                }
            }
            if (contador == 0) {
                printf("Registro ausente\n");
            }
            contador = 0;
        }
    
    } while ((strlen(operacao) != 0 ) || (strlen(entrada)!= 0));

    return 0;
}