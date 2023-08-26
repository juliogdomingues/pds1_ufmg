#include <stdio.h>
#include <string.h>

struct produto {
    char nome[52];
    char marca[52];
    float preco;
};

struct estoque {
    int quantidade;
    float soma_precos;
    char estoque_marca[52];
};

int main() {
    
    struct produto prod[10];
    struct estoque est[10];
    char entrada[52];
    char aux2[8];
    int cont = 0;

    for (int i = 0; i < 9; i++) {
        est[i].soma_precos = 0.0;
        est[i].quantidade = 0;
        prod[i].preco = 0.0;  
    }
    
    for (int j = 0; j < 8; j++) {
        int aux = 0;
        int aux1 = 1;
        
        fgets(entrada, 52, stdin);
        entrada[strlen(entrada)-1] = '\0';
        sscanf(entrada, "%s %s %f", prod[j].nome, prod[j].marca, &prod[j].preco);
        
        sscanf(prod[0].marca, "%s", est[0].estoque_marca);
        for(int k = j; k >= 0; k--) {
            if(k!=0 && aux1 && j >= 1 && !(strcmp(prod[j].marca, prod[j-k].marca))){
                est[j-k].quantidade += 1;
                printf("qtnd:%d\n",est[j-k].quantidade);
                est[j-k].soma_precos += prod[j].preco;
                printf("qtnd1:%f\n",est[j-k].soma_precos);
                aux1 = 0;
            } 
            else aux = 1;
        }
        if(aux && aux1){
            sscanf(prod[j].marca, "%s", est[j].estoque_marca);
            est[j].quantidade += 1;
            printf("qtnd2:%d\n",est[j].quantidade);
            est[j].soma_precos = prod[j].preco;
            printf("qtnd3:%f\n",est[j].soma_precos);
            aux2[cont] = j;
            cont++;
        }
    }
    for (int l = 0; l < cont; l++) {
        printf("%s %d\n", est[aux2[l]].estoque_marca, est[aux2[l]].quantidade);
    }
    
    float media = 0;
    float soma = 0;
    for (int m = 0; m < 8; m++) {
       soma += prod[m].preco;
       media = soma / 8;
       if (m==7)
       printf("media total %.2f\n", media);
    }
    for (int n = 0; n < cont; n++){
        printf("media %s %.2f\n", est[aux2[n]].estoque_marca, (est[aux2[n]].soma_precos/est[aux2[n]].quantidade));
    }
}