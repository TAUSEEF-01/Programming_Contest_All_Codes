#include <stdio.h>
#include <stdlib.h>
 int nextR(int n, int k, int *num);
int main()
{
    int n,k;
    int count=0;
    scanf("%d", &n);
    scanf("%d", &k);

    int *num = (int *) malloc(n * sizeof (int));



    for(int i=1; i<=n; i++)
    {
        scanf("%d", (num+i));
    }


    if(num[1] <= 0)
    {
        printf("%d", num[1]);
    }
    else{
    for(int j=1; num[j]>= num[k]; j++)
    {
         if(num[j]>= num[k])
        {    //for(int j=1; num[j]>= num[k]; j++)
        //{
            count++;
        }
        //printf("%d", count);

    }printf("%d", count);
    }



    free(num);

    return 0;
}

//     int result = nextR(n, k, *num);
//    printf("%d", result);
    /*

    for(int i=0; i<n; i++)
    {
        if(num[i] <=0) {
                printf("%d", num[i]);
            break;
        }

        else if(num[i] != 0 && (num[i]> num[k] || num[i]== num[k]))
        {
            count++;
        }

      */
   // int result=  nextR(n, k, *num);
    //printf("%d", result);


/*
 int nextR(int n, int k, int *num){

    int count =0, p=0;
    for(int i=0; i<1; i++)
    {
         if(num[i] != 0 && (num[i]> num[k] || num[i]== num[k]))
        {    for(int i=0; i<1; i++)
        {
            count++;
        }
        int l= count;
        //return count;
            //int p=count;
        } p=l;
    }
    return p;


 }
*/
