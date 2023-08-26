#include <stdio.h>
#include <math.h>

typedef struct {
    float comp_sep;
    float larg_sep; 
    float comp_pet; 
    float larg_pet; 
    char tipo[50];
} Iris;

void classificar(Iris iris_ni, Iris iris[], int n) {
    float distancia[n];
    for (int i=0; i < n; i++) {
        distancia[i] = sqrt(powf((iris_ni.comp_sep-iris[i].comp_sep), 2)+
                            powf((iris_ni.larg_sep-iris[i].larg_sep), 2)+
                            powf((iris_ni.comp_pet-iris[i].comp_pet), 2)+
                            powf((iris_ni.larg_pet-iris[i].larg_pet), 2));
    }
    
    int menor = 0;
    for (int i=1; i < n; i++) {
        printf("i = %s %f, menor = %s %f\n", iris[i].tipo, distancia[i], iris[menor].tipo, distancia[menor]); 
        if (distancia[i] < distancia[menor]) menor = i;
    }
        
    printf("%s\n", iris[menor].tipo); 
}

int main() {
    int n;
    scanf("%d", &n);
    
    Iris iris[n];
    
    for(int i=0; i < n; i++) {
        scanf("%f %f %f %f %s", &iris[i].comp_sep, &iris[i].larg_sep, &iris[i].comp_pet, &iris[i].larg_pet, iris[i].tipo);
    }

    Iris iris_ni;
    scanf("%f %f %f %f %s", &iris_ni.comp_sep, &iris_ni.larg_sep, &iris_ni.comp_pet, &iris_ni.larg_pet, iris_ni.tipo);
    
    classificar(iris_ni, iris, n);

    return 0;
}

/*
1. Implementar uma estrutura (struct) chamada Iris que contém os seguintes campos:
• comprimento da sépala – valor numérico real
• largura da sépala – valor numérico real
• comprimento da pétala – valor numérico real
• largura da pétala – valor numérico real
• tipo – string de até 50 caracteres
2. Realizar a leitura de um número inteiro n;
3. Realizar a leitura de n registros do tipo Iris;
4. Realizar a leitura de um registro Iris adicional representando os dados de uma flor que não
foi identificada;
5. Encontrar o registro que possui a menor distância euclidiana em relação aos valores lidos;
6. Imprimir o tipo da flor deste registro com a menor distância euclidiana.
A distância euclidiana deve ser calculada considerando os 4 valores reais dos registros. O programa deve
implementar e usar a função definida pelo protótipo abaixo:
Esta função recebe como parâmetro o registro Iris da flor não identificada e um vetor de Iris que
contém os n registros lidos no início do programa.
*/