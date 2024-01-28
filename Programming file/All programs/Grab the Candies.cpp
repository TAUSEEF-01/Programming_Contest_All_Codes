// accepted
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int > a(n);
        int sume =0, sumo =0;
        for(int i=0; i< n; ++i)
        {
            cin>>a[i];
            if(a[i]%2 ==0)
            {
                sume+=a[i];
            }
            else
            {
                sumo+=a[i];
            }
        }
        
        if(sume> sumo)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}