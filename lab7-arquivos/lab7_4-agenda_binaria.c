#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct cadastro {
    char nome[50];
    int idade;
    char telefone[20];
};

int main() {
    struct cadastro cad[100];
    char operacao[20], nome_arquivo[20], busca[100];
    int contador=0;
    setbuf(stdin, NULL);
    
    for (int n = 0; n < 100; n++) {
        strcpy(cad[n].nome, "blank");
    }

    FILE *arquivo;
    scanf("%s", nome_arquivo);
    arquivo = fopen(nome_arquivo, "rb");
    if (arquivo == NULL) printf("Erro na abertura do arquivo.\n");    
    fread(cad, sizeof(struct cadastro), MAX, arquivo);

    while (scanf("%s", operacao) != EOF) {
        if (!strcmp(operacao, "Encerrar")) break;
        if (!strcmp(operacao, "Inserir")) {
            for (int i = 0; i < MAX; i++) {
                if (!strcmp(cad[i].nome, "blank")) {
                    scanf("%s %d %s", cad[i].nome, &cad[i].idade, cad[i].telefone);
                    printf("Registro %s %d %s inserido\n", cad[i].nome, cad[i].idade, cad[i].telefone);
                    contador++;
                    break;
                }
            }
            if (contador == 0) printf("Espaco insuficiente\n");
            contador = 0;
        }

        if (!strcmp(operacao, "Exibir")) {
            scanf("%s", busca);
            for (int j=0; j < MAX; j++) {
                if (!strcmp(busca, cad[j].nome)) {
                    printf("Registro %s %d %s exibido\n", cad[j].nome, cad[j].idade, cad[j].telefone);
                    contador++;
                    break;
                }
            }
            if (contador == 0) printf("Registro %s invalido\n", busca);
            contador = 0;
        }

        if (!strcmp(operacao, "Alterar")) {
            scanf("%s", busca);
            for (int k=0; k < MAX; k++) {
                if (!strcmp(busca, cad[k].nome)) {
                    scanf("%d %s", &cad[k].idade, cad[k].telefone);
                    printf("Registro %s %d %s alterado\n", cad[k].nome, cad[k].idade, cad[k].telefone);
                    contador++;
                    break;
                }
            }
            if (contador == 0) printf("Registro %s invalido\n", busca);
            contador = 0;
        }
            
        if (!strcmp(operacao, "Excluir")) {
            scanf("%s", busca);
            for (int l=0; l < MAX; l++) {
                if (!strcmp(busca, cad[l].nome)) {
                    printf("Registro %s %d %s excluido\n", cad[l].nome, cad[l].idade, cad[l].telefone);
                    strcpy(cad[l].nome, "blank");
                    contador++;
                    break;
                }
            }
            if (contador == 0) printf("Registro %s invalido\n", busca);
            contador = 0;
        }
        
    }
    
    arquivo = fopen(nome_arquivo, "wb");
    fwrite(&cad, sizeof(struct cadastro), MAX, arquivo);
    fclose(arquivo);
    return 0;
}


/*
7.4. Implemente uma agenda de contatos de tamanho máximo 100, que armazena:
● nome (máximo 50 caracteres),
● idade (número inteiro)
● número de telefone (máximo 20 caracteres)
A agenda deve ser gravada em arquivo binário. Implemente as opções de “Inserir”, “Alterar”,
“Excluir” e “Exibir” contatos. Para as opções de “Alterar”, “Excluir” e “Exibir”, o programa
deve perguntar ao usuário o nome do contato e, em seguida, realizar a respectiva operação.
O programa deve solicitar o nome do arquivo da agenda. Para cada opção, o programa
deve imprimir o resultado da operação. Se não houver espaço o programa deve exibir
Espaco insuficiente
*/