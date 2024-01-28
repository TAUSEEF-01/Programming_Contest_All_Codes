#include<stdio.h>

int main()
{
    int n, i;
    int num[i];
    int sumb= 0;
    int sumg= 0;
    char ch;
    scanf("%d", &n);

    for (int i= 0; i< n; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf(" %c", &ch);


    if(ch=='b')
    { for(int i=0; i<n; i=i+2){

        sumb= sumb+ num[i];
    }
    printf("%d\n", sumb);
    }
    else if(ch== 'g')
    {
        for(int i=0; i<n; i++){
        sumg= sumg+ num[2*i+1];
    }
    printf("%d\n", sumg);
    }
    else if(n==1 && ch=='g'){
        printf("0");
    }
    else if(n==1 && ch=='b'){
        printf("%d", num[0]);
    }

    return 0;
}

 // hackerrank er system onujayee code ta modify kortesi
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int student;
    int num[student];
    int sum;
    //int sumb= 0;
    //int sumg= 0;
    scanf("%d", &number_of_students);

    for (int student= 0; student<number_of_students; student++)
    {
        scanf("%d", &num[student]);
    }

    scanf(" %c", &gender);


    if(gender=='b')
    { for(int student=0; student<number_of_students; student=student+2){

        sum = marks+ num[student];
    }
    // printf("%d\n", marks);
    }
    else if(gender== 'g')
    {
        for(int student=0; student<number_of_students; student++){
        marks= marks+ num[2*student+1];
    }
    //printf("%d\n", marks);
    }
    else if(number_of_students==1 && gender=='g'){
        //printf("0");
        return sum;
    }
    else if(number_of_students==1 && gender=='b'){
        //printf("%d", num[0]);
        return sum;
    }


}

*/




/*

#include<stdio.h>
int takeinput(int n);

int main()
{
    int n, b, g, a;
    scanf("%d", &n);
    takeinput(n);
    return 0;
}
int takeinput( int n)
{
    int i, sum=0;
    int num;
    char ch, b,g;
    for(i=1; i<=n; i++){
    scanf("%d", &num);
    scanf("%c", &ch);
    if(i%2 == 0 && ch=='b'){
    sum = sum+num;
    printf("%d\n", sum);
    }
    else {
    sum = sum+num;
    printf("%d\n", sum);
    }
    }

    return sum;
}


*/


/*

#include<stdio.h>
int main()
{
    int i, n, a, sum=0;

    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        sum += a;
    }
    printf("Sum = %d\n\n", sum);

    return 0;
}

*/

// Eikhane thik nicher ta summation er r ekta example:

/*

#include <stdio.h>

int main(int argc, const char *argv[]) {
	int i, x, total = 0;

	for (i = 0; i < 10; i++) {
		printf("Enter a number: ");
		scanf("%d",&x);
		total += x;
	}
	printf("The total is %d\n",total);

	return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a, sum;
    char gender;
    for()
    {
        scanf("%d", &n);
        if(n>=1)
        {
         scanf("%d", &a);

        if(n%2 != 0)
        {
            printf("%d", sum);
        }
        }
    }


    return 0;
}

*/

/*
    int n, p, x, y, z;
    char gender, b, g;
    scanf("%d %d %d %d %d", &n, &p, &x, &y, &z);
    scanf("%c", &gender);
    if(n % 2 != 0)
    {
        printf("%d", p+y);
    }
    else if( n % 2 == 0)
    {
        printf("%d", x+z);
    }

    */
