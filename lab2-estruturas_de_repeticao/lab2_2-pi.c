#include <stdio.h>
#include <math.h>

int main() {
    double denominador, n;
    float operador = 1;
    int i = 0;
    double pi = 0;
    scanf("%lf", &n);
    //printf("%lf", M_PI);
    double erro = n+1;
    for (i; (erro > n); i++) {
        denominador = (2 * i) + 1;
        //printf("denominador atual: %lf\n", denominador);
        pi = pi + (4 * (1 / denominador) * operador);
        //printf("pi atual: %lf\n", pi);
        operador *= -1;
        erro = fabs(pi - M_PI);
        //printf("erro atual: %lf\n", erro);

    }
    printf("iterações: %d", i);
    
    return 0;
}