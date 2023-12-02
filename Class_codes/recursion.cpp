/*

*****
****
***
**
*



*
**
***
****
*****



    *
   **
  ***
 ****
*****



    *
   * *
  * * *
 * * * *
* * * * *



1
2 2
3 3 3
4 4 4 4
5 5 5 5 5



1
2    3
4    5    6
7    8    9    10
11    12    13    14    15



A
B B
C C C
D D D D
E E E E E



A
B C
D E F
G H I J
K L M N O

*/

#include <stdio.h>
#include <math.h>
#define ll long long
#define inpi(n) scanf("%d", &n)
#define inpll(n) scanf("%lld", &n)
#define inpc(n) scanf("%c", &n)
#define inpd(n) scanf("%lf", &n)

void print_lvl(int n, int &num)
{
    if (n == 0)
        return;

    printf("%c ", num++ + 'A' - 1);
    n--;
    print_lvl(n, num);
}

void rec_print(int n, int i, int &num)
{
    if (n + 1 == i)
        return;

    print_lvl(i, num);
    printf("\n");

    i++;
    rec_print(n, i, num);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    int num = i;
    rec_print(n, i, num);
}

int main()
{

    recursion();
    return 0;
}

// #include <stdio.h>
// #include <math.h>
// #define ll long long
// #define inpi(n) scanf("%d", &n)
// #define inpll(n) scanf("%lld", &n)
// #define inpc(n) scanf("%c", &n)
// #define inpd(n) scanf("%lf", &n)

/*

// *****
// ****
// ***
// **
// *

void print_lvl(int n)
{
    if (n == 0)
        return;

    printf("*");
    n--;
    print_lvl(n);
}

void rec_print(int n)
{
    if (n == 0)
        return;

    print_lvl(n);
    printf("\n");
    n--;
    rec_print(n);
}

void recursion()
{
    int n;
    inpi(n);
    rec_print(n);
}

*/


/*

// *
// **
// ***
// ****
// *****


void print_lvl(int n)
{
    if (n == 0)
        return;

    printf("*");
    n--;
    print_lvl(n);
}

void rec_print(int n, int i)
{
    if (n + 1 == i)
        return;

    print_lvl(i);
    printf("\n");

    i++;
    rec_print(n, i);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    rec_print(n, i);
}

*/

/*

//     *
//    **
//   ***
//  ****
// *****


void print_lvl(int n)
{
    if (n == 0)
        return;

    printf(" ");
    n--;
    print_lvl(n);
}

void print_lvl2(int n)
{
    if (n == 0)
        return;

    printf("*");
    n--;
    print_lvl2(n);
}

void rec_print(int n, int i)
{
    if (n == 0)
        return;

    print_lvl(n - 1);
    print_lvl2(i);
    printf("\n");

    i++;
    n--;
    rec_print(n, i);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    rec_print(n, i);
}

*/

/*

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

void print_space(int n)
{
    if (n <= 0)
        return;

    printf(" ");
    n--;
    print_space(n);
}

void print_star(int n)
{
    if (n == 0)
        return;

    printf("* ");
    n--;
    print_star(n);
}

void rec_print(int n, int i, int x)
{
    if (n == 0)
        return;

    print_space(i);
    print_star(x);
    print_space(i - 1);
    printf("\n");

    i--;
    x++;
    n--;
    rec_print(n, i, x);
}

void recursion()
{
    int n;
    inpi(n);
    int i = n - 1;
    int x = 1;
    rec_print(n, i, x);
}

*/

/*

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

void print_lvl(int n, int num)
{
    if (n == 0)
        return;

    printf("%d ", num);
    n--;
    print_lvl(n, num);
}

void rec_print(int n, int i)
{
    if (n + 1 == i)
        return;

    int num = i;
    print_lvl(i, num);
    printf("\n");

    i++;
    rec_print(n, i);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    rec_print(n, i);
}

*/

/*

// 1
// 2    3
// 4    5    6
// 7    8    9    10
// 11    12    13    14    15

void print_lvl(int n, int &num)
{
    if (n == 0)
        return;

    printf("%d    ", num++);
    n--;
    print_lvl(n, num);
}

void rec_print(int n, int i, int &num)
{
    if (n + 1 == i)
        return;

    print_lvl(i, num);
    printf("\n");

    i++;
    rec_print(n, i, num);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    int num = i;
    rec_print(n, i, num);
}

*/

/*

// A
// B B
// C C C
// D D D D
// E E E E E

void print_lvl(int n, int num)
{
    if (n == 0)
        return;

    printf("%c ", num + 'A' - 1);
    n--;
    print_lvl(n, num);
}

void rec_print(int n, int i)
{
    if (n + 1 == i)
        return;

    int num = i;
    print_lvl(i, num);
    printf("\n");

    i++;
    rec_print(n, i);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    rec_print(n, i);
}

*/

/*

// A
// B C
// D E F
// G H I J
// K L M N O

void print_lvl(int n, int &num)
{
    if (n == 0)
        return;

    printf("%c ", num++ + 'A' - 1);
    n--;
    print_lvl(n, num);
}

void rec_print(int n, int i, int &num)
{
    if (n + 1 == i)
        return;

    print_lvl(i, num);
    printf("\n");

    i++;
    rec_print(n, i, num);
}

void recursion()
{
    int n;
    inpi(n);
    int i = 1;
    int num = i;
    rec_print(n, i, num);
}

*/

// int main()
// {

//     recursion();
//     return 0;
// }