    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t,n,a;
        cin>>t;
        for(int i=0; i<t; i++)
        {
            string s;
            int c1=0, c2=0;
            cin>>n;
            if(n==1)
            {
                cin>> a;
                cout<<"YES\n";
            }

            else
            {
           
            for(int j=0; j<n; j++)
            {
                cin>> a;
                s[j]=a;
            }
            string arr, tst;
            cin>> arr;
            
            
            for(int l=0; l<n; l++)
            {
            for(int k=l; k<n; k++)
            {
            if(s[l]==s[k])
            {
                tst[l]=s[k];
            }
            // if(arr[l]==arr[k])
            // {
            //     c2++;
            // }
            }
            }
            if(tst==arr)
            {
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            }
            
        }
        return 0;
    }