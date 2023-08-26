#include <stdio.h>

int main () {
    int aeds, calculo;
    
    scanf("%d", &aeds);
    
    int alunos_aeds[aeds];

    for (int i = 0; i < aeds; i++) {
        scanf("%d", &alunos_aeds[i]);
    }
    
    scanf("%d", &calculo);
    int alunos_calc[calculo];

    for (int i = 0; i < calculo; i++) {
        scanf("%d", &alunos_calc[i]);
    }
    
    for (int i = 0; i < aeds; i++) {
        for (int j = 0; j < calculo; j++) {
            if (alunos_aeds[i] == alunos_calc[j]) printf("%d\n", alunos_aeds[i]);
        }
    }
    
    return 0;
}