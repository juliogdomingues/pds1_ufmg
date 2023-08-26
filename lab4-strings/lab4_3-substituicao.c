#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30];
    char C1;
    char C2;
    
    fgets(palavra, 30, stdin);
    scanf("%c\n", &C1);
    scanf("%c", &C2);
    
    for (int i=0; i < strlen(palavra); i++) {
        if (palavra[i] == C1) {
            palavra[i] = C2;
            break;
        }
    }

    printf("%s", palavra);

    return 0;
}