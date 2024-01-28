#include <stdio.h>

int main() {
    int a=31,x=0,l=50;
    int *ptr= &a;
    int str= &l;
    int b= *ptr;
    x= *ptr + ptr[0];
    printf("%d\n", ptr[0]);
    printf("%d\n", *ptr); //*prt er maan a er maan hobe but, shudhu ptr er maan hobe memory location
    printf("%p\n", ptr);
    printf("%d\n", str);
    printf("%d\n", b);
    printf("%d\n", x);
    return 0;
}
