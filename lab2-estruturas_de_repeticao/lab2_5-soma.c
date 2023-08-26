#include <stdio.h>

int main()
{
    int soma = 0;
    int x;
    scanf("%d", &x);
    
    for(x; x > 0; x--) {
        soma += x;
    }
    
    printf("%d", soma);

    return 0;
}