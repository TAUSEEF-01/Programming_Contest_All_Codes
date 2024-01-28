#include<iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int area= m*n;
    int result = area/2;
    if(area % 2 == 0 || area % 2 <= 1)
    {
        cout<<result;
    }
    
    return 0;
}