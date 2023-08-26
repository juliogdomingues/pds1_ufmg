#include <stdio.h>

int main()
{
    int num = 233;
    int max = 457;
    do {
        printf("%d\n", num);
        num += 5;
    } while(num<300);
    
    do {
        printf("%d\n", num);
        num += 3;
    } while((num>=300) && (num<=400));

    do {
        printf("%d\n", num);
        num += 5;
    } while((num>400) && (num<=max));
    
    return 0;
}
