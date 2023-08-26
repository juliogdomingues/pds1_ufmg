#include <stdio.h>

int main()
{
    int x, y, z;

    // asks for three numbers
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    
    int max_value;
    if (x >= y) {
        if (x > z) {
            max_value = x;
        }
        else if (x < z) {
            max_value = z;
        }
    }
    else if (y >= z) {
        max_value = y;
    }
    else {
        max_value = z;
    }
    printf("%d", max_value);
    return 0;
}
