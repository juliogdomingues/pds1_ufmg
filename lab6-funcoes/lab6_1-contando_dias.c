#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_dias (int dia, int mes, int ano);
int bissexto (int ano);

int main () {
    int dia, mes, ano;
    int transcorridos = 0;

    while(scanf("%d",&dia)!=EOF){
            scanf ("%d %d",&mes,&ano);
            transcorridos = conta_dias(dia,mes,ano);
            printf("%d\n",transcorridos);
    }
    return 0;
}

int bissexto (int ano) {
    if ((ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0))) return 1;
    else return 0;
}

int conta_dias (int dia, int mes, int ano) {
    int x = 1;
    int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = ano; i <= 2020; i++) {
        if ((i == ano) && (ano != 2020)){
            for (int j = mes; j <= 12; j++){
                if (j == mes) x += meses[j-1] - dia;
                else x += meses [j-1];
                if (bissexto(i) && (j == 2)) x++;
            }
        }
        
        else if ((i == ano) && (ano == 2020)) {
            if (mes == 9) x += (17 - dia);
            else {
                for (int j = mes; j <= 9; j++) {
                if (j == mes) x += meses[j-1] - dia;
                else if (j == 9) x +=17;
                else x += meses[j-1];
                if (bissexto(i) && (j == 2)) x++;
                }
            }
        }  

        else if (i == 2020) {
            for (int j = 1; j <= 9; j++) {
                if (j == 9) x += 17;
                else x += meses[j-1];
                if (bissexto(i) && (j == 2)) x++;
            }
        }
        
        else {
            if (bissexto(i)) x += 366;
            else x += 365;
        }
    }

    return x;
}

/*
Escreva uma função que recebe 3 parâmetros inteiros correspondendo aos valores de
dia, mês e ano, respectivamente. A função deve retornar o número de dias já transcorridos
em relação à data de 17/09/2020, incluindo o dia final no cálculo. Implemente um programa
que utilize a função pedida, lendo da entrada padrão uma série de datas e imprimindo o
número de dias conforme função solicitada.
*/


/*
// abordagem anterior
int conta_dias (int d, int m, int a) {
    int anos_transcorridos, meses_transcorridos, dias_transcorridos, anos_bissextos;
    anos_transcorridos = meses_transcorridos = dias_transcorridos = anos_bissextos = 0;

    if (a <= 2020) anos_transcorridos = 2020 - a;
    else return 0;

    if (m > 9) anos_transcorridos--;
    if (m == 9) {
        if (d > 17) anos_transcorridos--;
    }
    
    if (m == 8) dias_transcorridos = 31 - d + 17;
    if (m == 7) dias_transcorridos = 31+31 - d + 17;
    if (m == 6) dias_transcorridos = 31+31+30 - d + 17;
    if (m == 5) dias_transcorridos = 31+31+30+31 - d + 17;
    if (m == 4) dias_transcorridos = 31+31+30+31+30 - d + 17;
    if (m == 3) dias_transcorridos = 31+31+30+31+30+31 - d + 17;
    if (m == 2) dias_transcorridos = 31+31+30+31+30+31+28 - d + 17;
    if (m == 1) dias_transcorridos = 31+31+30+31+30+31+28+31 - d + 17;
    if (m == 12) dias_transcorridos = 31+31+30+31+30+31+28+31+31 - d + 17;
    if (m == 11) dias_transcorridos = 31+31+30+31+30+31+28+31+31+30 - d + 17;
    if (m == 10) dias_transcorridos = 31+31+30+31+30+31+28+31+31+30+31 - d + 17;
    if (m == 9) {
        if (d < 17) dias_transcorridos = 17 - d;
        if (d > 17) dias_transcorridos = 31+31+30+31+30+31+28+31+31+30+31+30 - d + 17;
    }
    
    dias_transcorridos += (365 * anos_transcorridos);
    
    for (int i = a; i <= 2020; i++) {
        if ((i % 4 == 0) && ((i % 100 != 0) || (i % 400 == 0))) dias_transcorridos++;
    }
    
    return ++dias_transcorridos;
}
*/