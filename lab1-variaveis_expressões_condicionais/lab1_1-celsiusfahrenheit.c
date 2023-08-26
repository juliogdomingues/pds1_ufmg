#include <stdio.h>

int main()
{
    float c;
    // printf("Insert the temperature in Celsius: ");
    scanf("%f", &c);
    float f = (1.8 * c) + 32;
    // printf("%0.f in Celsius corresponds to %0.f in Fahrenheit.", c, f);
    printf("%0.f", f);
    return 0;
}