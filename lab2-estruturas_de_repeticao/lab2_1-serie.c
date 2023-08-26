#include <stdio.h>

int main()
{
    int n, x0, x1, result;
    scanf("%d %d %d", &n, &x0, &x1);
    printf("X0: %d\n", x0);
    printf("X1: %d\n", x1);
    
    for (int i=1; i < n; i++) {
        result = (4*x1)-(2*x0);
        printf("X%d: %d\n", i+1, result);
        x0 = x1;
        x1 = result;
    }
    return 0;
}