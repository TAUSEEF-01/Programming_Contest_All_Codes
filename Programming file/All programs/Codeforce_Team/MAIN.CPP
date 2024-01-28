#include <iostream>

using namespace std;

int main()
{
    int  n, num1, num2, num3, count=0;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>> num1;
        cin>> num2;
        cin>> num3;

        if(((num1)+ (num2)+ (num3))>1)
        {
            count++;
        }
        else
        {
            continue;
        }
        }
        printf("%d", count);

    return 0;
}
