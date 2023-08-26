#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    unsigned int idade;
    float salario;
    char rua[50];
    unsigned int numero;
    char estado[50];
};

int main () {

    struct cadastro cad[5];
    char operacao[10];
    char entrada[100];
    int i = 0;
    char busca[50];
    int contador=0;
    setbuf(stdin, NULL);
    
    do {
        fgets(operacao, 10, stdin);
        operacao[strlen(operacao)-1] = '\0';
//        printf("operacao: %s\n", operacao);
        
        if (!strcmp(operacao, "encerrar")) break;

        fgets(entrada, 100, stdin);
        entrada[strlen(entrada)-1] = '\0';
        
        if (!strcmp(operacao, "inserir") && i >= 5) printf("Espaco insuficiente\n");

        if (!strcmp(operacao, "inserir") && i < 5) {
                sscanf(entrada, "%s %d %f %s %d %s", cad[i].nome, &cad[i].idade, &cad[i].salario, cad[i].rua, &cad[i].numero, cad[i].estado);
                printf("Registro %s %d %.2f %s %d %s inserido\n", cad[i].nome, cad[i].idade, cad[i].salario, cad[i].rua, cad[i].numero, cad[i].estado);
                i++;
        }

        if (!strcmp(operacao, "mostrar")) {
            for (int j=0; j < 5; j++) {
                if (!strcmp(entrada, cad[j].nome)) {
                    printf("Registro %s %d %.2f %s %d %s\n", cad[j].nome, cad[j].idade, cad[j].salario, cad[j].rua, cad[j].numero, cad[j].estado);
                    contador++;
                }
            }
            if (contador == 0) {
                printf("Registro ausente\n");
            }
            contador = 0;
        }
        
        if (!strcmp(operacao, "alterar")) {
            char aux[100];
            for (int k=0; k < 5; k++) {
                sscanf(entrada, "%s", aux);
                if (!strcmp(aux, cad[k].nome)) {
                    sscanf(entrada, "%s %d %f %s %d %s", cad[k].nome, &cad[k].idade, &cad[k].salario, cad[k].rua, &cad[k].numero, cad[k].estado);
                    printf("Registro %s %d %.2f %s %d %s alterado\n", cad[k].nome, cad[k].idade, cad[k].salario, cad[k].rua, cad[k].numero, cad[k].estado);
                    contador++;
                }
            }
            if (contador == 0) {
                printf("Registro ausente para alteracao\n");
            }
            contador = 0;
        }
    } while ((strlen(operacao) != 0 ) || (strlen(entrada)!= 0));

    return 0;
}