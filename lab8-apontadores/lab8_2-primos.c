#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo (unsigned long int n) {
    if (n < 2) return -1;
    if ((n == 2) || (n == 3)) return 1;
    if ((n % 2 == 0) || (n % 3 == 0)) return 0;
    
    for (unsigned long int i = 5; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void primos(int m, int *p1, int *p2) {

    for (int i = m - 1; i > 0; i--) {
        if (primo(i) == 1) {
            *p1 = i;
            break;
        }
    }

    for (int i = m + 1; ; i++) {
        if (primo(i) == 1) {
            *p2 = i;
            break;
        }
    }
}

int main () {
    int m;
    int menor_primo = 1;
    int maior_primo = 1;
    
    int *p1, *p2;
    p1 = &menor_primo;
    p2 = &maior_primo;
    
    scanf("%i", &m);
    primos(m, p1, p2);
    printf("%d\n", menor_primo);
    printf("%d\n", maior_primo);
}