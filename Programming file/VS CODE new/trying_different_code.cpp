#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a= (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        cin >> *(a+i);
        if(i==0){
            continue;
        }
        else{
        cout<<"Numbers are"<< *(a+i-1)<< endl;
        }
    }
    
    return 0;
}