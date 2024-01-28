#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch <= 'Z' && ch >= 'A')
    {
        printf("Upper case");
    }
    else if(ch <= 'z' && ch >= 'a')
    {
        printf("Lower case");
    }
    else
    {
        printf("Not a character");
    }
    return 0;
}
