#include <stdio.h>
#include <stdlib.h>


/*
struct{
    char *name;
    int age;
    int salary;
} emp1, emp2;   */


// ei bhabe o likha jay!

struct employee{
    char *name;
    int age;
    int salary;
};

int manager()
{
    /*

    struct{
        char *name;
        int age;
        int salary;
    } manager;

    */

    struct employee manager;

    printf("Enter manager age: ");
    scanf("%d", &manager.age);
    //manager.age = 27;
    if(manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;
    return manager.salary;
}

int main()
{
    struct employee emp1;
    struct employee emp2;


    printf("Enter the salary of employee1: ");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee2: ");
    scanf("%d", &emp2.salary);
    printf("Employee 1 salary is: %d\n", emp1.salary);
    printf("Employee 2 salary is: %d\n", emp2.salary);
    printf("Manager's salary is: %d ", manager());


    return 0;
}
