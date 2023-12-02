#include<stdio.h>
#include<math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpl(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)

/*
output of the solve fnc:

printing the value of x that is the address of the variable n.
// these are the same expression --> &n==x
0x7ffc58a284e4
0x7ffc58a284e4

printing the actual value of the variable n.
// these are the same expression --> n==*x
100
100


printing the address of the the pointer x.
// these are the same expression --> &x==xx
0x7ffc58a284e8
0x7ffc58a284e8

printing the value of the pointer x that is the memory address of n.
// these are the same expression --> &n==x==*xx
0x7ffc58a284e4
0x7ffc58a284e4
0x7ffc58a284e4

printing the actual value of the variable.
// these are the same expression --> n==*x==**xx
100
100
100

*/

void solve()
{
    /**/
    int n=100;
    int *x=&n;

    //printing the value of x that is the address of the variable n
    printf("printing the value of x that is the address of the variable n.\n");
    /*
    these are the same expression --> &n==x
    */
    printf("%p\n", &n);
    printf("%p\n\n", x);

    //printing the actual value of the variable n
    printf("printing the actual value of the variable n.\n");
    /*
    these are the same expression --> n==*x
    */
    printf("%d\n", n);
    printf("%d\n\n", *x); 

    printf("\n");


    /**/
    int **xx=&x;
    
    //printing the address of the the pointer x
    printf("printing the address of the the pointer x.\n");
    /*
    these are the same expression --> &x==xx
    */
    printf("%p\n", xx);
    printf("%p\n\n", &x);

    //printing the value of the pointer x that is the memory address of n
    printf("printing the value of the pointer x that is the memory address of n.\n");
    /*
    these are the same expression --> &n==x==*xx
    */
    printf("%p\n", *xx);
    printf("%p\n", &n);
    printf("%p\n\n", x);

    //printing the actual value of the variable
    printf("printing the actual value of the variable.\n");
    /*
    these are the same expression --> n==*x==**xx
    */
    printf("%d\n", n);
    printf("%d\n", *x);
    printf("%d\n\n", **xx);

}


int main()
{
    
    solve();

    return 0;
}