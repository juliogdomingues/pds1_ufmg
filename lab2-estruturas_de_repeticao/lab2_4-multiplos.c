#include <stdio.h>

int main()
{
    static int x, mult_2, mult_3, mult_5, mult_todos;
    scanf("%d", &x);
    while (x > 0) {
        if (x % 2 == 0) {
            mult_2++;
            //printf("é divisível por 2 \n");
        }
        
        if (x % 3 == 0) {
            mult_3++;
            //printf("é divisível por 3 \n");
        }        
        if (x % 5 == 0) {
            mult_5++;
            //printf("é divisível por 5 \n");
        }
        
        if ((x % 2 == 0) && (x % 3 == 0) && (x % 5 == 0)) {
            mult_todos++;
        }
        
        x--;
    }
    printf("Múltiplos de 2: %d\n", mult_2);
    printf("Múltiplos de 3: %d\n", mult_3);
    printf("Múltiplos de 5: %d\n", mult_5);
    printf("Múltiplos de todos: %d\n", mult_todos);

    return 0;
}