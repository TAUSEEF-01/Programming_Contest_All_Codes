#include <stdio.h>

int main() {
    int a;

    do
        {
            printf("Enter number: ");
            scanf("%d", &a);
            if(a % 2 != 0)  // multiple of 7 hole program input nibe na emn hole hobe ----->
            //if(a % 7 == 0)
            {
                break;
            }

        }while(1);
        printf("Thank you");

    return 0;
}


/*

    // eita dileo hobe
    for(int i=0; ; i++){
    scanf("%d", &a);
    if(a%2 == 0){
        printf("even\n");
    }
    else {
        printf("odd\n");
    break;}
    }

    */
