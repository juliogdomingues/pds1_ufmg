#include <stdio.h>

int main () {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    for (a; a <= b; a++) {
        int verifica = 0;
        
        for (int i = 2; i < a; i++) {
            if (a % i == 0) verifica++;
        }
        
        if (verifica == 0 && a != 1) printf("%d\n", a);
    }

    return 0;
}