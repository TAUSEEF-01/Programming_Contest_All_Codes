#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int length_words(char arr[]);
int main()
{
    int i;
    int n, length[i];
    scanf("%d", &n);
    int words[n];

    for(int i=0; i<n; i++)
    {
    scanf_s("%d", words[i]);
    length[i]= strlen(words[i]);
    printf("%d", length[i]);
    }

 //   length_words(words);
   /*

    for(int i=0; i<n; i++)
    {




    if(length_words(words)+2 < 10)
    {
        printf("%s", words);
    }
    else
    {
        printf("%c%d%c", words[0], length_words(words), words[length_words(words)+1] );

    }



    }
    */

    return 0;
}
/*
int length_words(char arr[])
{
    int count= 0;
    for(int i=3; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
*/
