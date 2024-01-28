#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender)
 {

    int p= 0, q = 0;
    int sum= 0;
    int *sum1= &p;
    int *sum2= &q;
    if(gender=='b')
    { for(int i=0; i<number_of_students; i=i+2){

    *sum1= *sum1+ marks[i];

    }
    int x= *sum1;
    return x;
    }

    else if(gender== 'g')
    {
    for(int i=0; i<number_of_students; i++){
    *sum2= *sum2+ marks[2*i+1];

    }
    int y= *sum2;
    return y;
    }

    else if(number_of_students==1 && gender=='g'){
    return sum;
    }

    else if(number_of_students==1 && gender=='b'){
    return marks[1];
    }

    return 1;
 }


int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
