#include<stdio.h>

int main()
{
	// float a,b;
	// scanf("%f%f", &a, &b);
	// // printf("In decimal %d\n", a+b);
	// // printf("In octal %o\n", a+b);
	// // printf("In hexadecimal %x\n", a+b);
	// // printf("In hexadecimal %X\n", a+b);
	// printf("%3.3lf%%\n", (a/b)*100.0);
	int a;
	scanf("%d", &a);
	printf("%d", a%10+a/10);

	// char a, b;
	// scanf("%c %c", &a, &b);
	// printf("%d", a-'0'+ b-'0');


	return 0;
}
