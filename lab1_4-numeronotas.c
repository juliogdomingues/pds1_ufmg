#include <stdio.h>

int main()
{
    int value;
    scanf("%d", &value);
    int c100 = (value / 100);
    int c50 = (value -= (100 * c100)) / 50;
    int c20 = (value-= (50 * c50)) / 20;
    int c10 = (value-= (20 * c20)) / 10;
    int c5 = (value-= (10 * c10)) / 5;
    int c2 = (value-= (5 * c5)) / 2;
    int c1 = (value-= (2 * c2)) / 1;
    printf("100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d", c100, c50, c20, c10, c5, c2, c1);
    return 0;
}