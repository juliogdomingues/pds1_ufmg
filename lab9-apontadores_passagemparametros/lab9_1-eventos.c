#include <stdio.h>

typedef struct {
    int dia;
    enum meses_do_ano {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro} mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    char local[100];
    Data data_evento;
} Evento;

void cadastrar_eventos(Evento agenda[], int n) {
    for (int i=0; i < n; i++) {
        scanf("%s", (agenda)[i].nome);
        scanf("%s", (agenda)[i].local);
        scanf("%d", &agenda[i].data_evento.dia);
        scanf("%u", &agenda[i].data_evento.mes);
        scanf("%d", &agenda[i].data_evento.ano);
    }
}

void imprimir_eventos(Evento agenda[], Data d, int n) {
        int contador = 0;
        for (int i=0; i < n; i++) {
            if (d.dia == agenda[i].data_evento.dia && d.mes==agenda[i].data_evento.mes && d.ano==agenda[i].data_evento.ano) {
                printf("%s %s\n", agenda[i].nome, agenda[i].local);
                contador++;
            }
        }
        if (contador == 0) printf("Nenhum evento encontrado!");
}
        
int main () {
    int n;
    scanf("%d", &n);
    Evento agenda[n];
    Evento *pont_agenda = agenda;
    
    cadastrar_eventos(pont_agenda, n);

    Data d;
    Data *pont_data = &d;
    scanf("%d %u %d", &d.dia, &d.mes, &d.ano);

    imprimir_eventos(agenda, d, n);
}

/*
Inicialmente deve solicitar a leitura de um número inteiro n
Em seguida deve solicitar a leitura de n registros do tipo Evento, estes registros devem ser
armazenados em um vetor do tipo Evento. Esta leitura deve ser feita em uma função chamada:
*/
/*
Após a leitura dos n registros, o programa deve realizar a leitura de um registro do tipo Data
e imprimir na tela todos os eventos daquela data na ordem em que foram cadastrados. Caso
não haja eventos cadastrados naquela data, imprimir a mensagem “Nenhum evento
encontrado!”. Essa impressão deve ser feita usando uma função chamada:
*/