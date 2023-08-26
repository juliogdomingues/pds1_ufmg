#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[100];
    char nome2[100];
    
    setbuf(stdin, NULL);
    
    gets(nome1);
    gets(nome2);
    
    strcat(nome1,nome2);
    
    printf("%s", nome1);

    return 0;
}