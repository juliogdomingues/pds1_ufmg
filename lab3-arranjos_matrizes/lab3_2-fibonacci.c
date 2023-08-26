#include <stdio.h>

int main () {
    int n;
    
    do {
        scanf("%d", &n);
        int fibonacci[800] = {0, 1};
        int proximo = 0;
        
        for (int i = 2; i <= n; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    
        printf("%d\n", fibonacci[n]);
    } while (n >=0 && n < 801);
    
    return 0;
}