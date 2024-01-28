#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vsort(a) sort(a.begin(), a.end())
#define vmin(a) *min_element(a.begin(), a.end())
#define vmax(a) *max_element(a.begin(), a.end())
const ll N=1e9+7;


void solve()
{
    int ans=0;
    for(int i=1; i<=10; i++)
    {
        string a;
        cin>>a;

        if(i==1)
        {
            for(int j=0; j<10; j++)
            {
                if(a[j]=='X')
                ans+=1;
            }
        }
        else if(i==2)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            for(int j=1; j<9; j++)
            {
                if(a[j]=='X')
                ans+=2;
            }
        }
        else if(i==3)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            if(a[1]=='X') ans+=2;
            if(a[8]=='X') ans+=2;
            for(int j=2; j<8; j++)
            {
                if(a[j]=='X')
                ans+=3;
            }
        }
        else if(i==4)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            if(a[1]=='X') ans+=2;
            if(a[8]=='X') ans+=2;
            if(a[2]=='X') ans+=3;
            if(a[7]=='X') ans+=3;
            for(int j=3; j<7; j++)
            {
                if(a[j]=='X')
                ans+=4;
            }
        }
        else if(i==5)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            if(a[1]=='X') ans+=2;
            if(a[8]=='X') ans+=2;
            if(a[2]=='X') ans+=3;
            if(a[7]=='X') ans+=3;
            if(a[3]=='X') ans+=4; 
            if(a[6]=='X') ans+=4;
            for(int j=4; j<6; j++)
            {
                if(a[j]=='X')
                ans+=5;
            }
        }
        else if(i==6)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            if(a[1]=='X') ans+=2;
            if(a[8]=='X') ans+=2;
            if(a[2]=='X') ans+=3;
            if(a[7]=='X') ans+=3;
            if(a[3]=='X') ans+=4; 
            if(a[6]=='X') ans+=4;
            for(int j=4; j<6; j++)
            {
                if(a[j]=='X')
                ans+=5;
            }
        }
        else if(i==7)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            if(a[1]=='X') ans+=2;
            if(a[8]=='X') ans+=2;
            if(a[2]=='X') ans+=3;
            if(a[7]=='X') ans+=3;
            for(int j=3; j<7; j++)
            {
                if(a[j]=='X')
                ans+=4;
            }
        }
        else if(i==8)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            if(a[1]=='X') ans+=2;
            if(a[8]=='X') ans+=2;
            for(int j=2; j<8; j++)
            {
                if(a[j]=='X')
                ans+=3;
            }
        }
        else if(i==9)
        {
            if(a[0]=='X') ans+=1;
            if(a[9]=='X') ans+=1;
            for(int j=1; j<9; j++)
            {
                if(a[j]=='X')
                ans+=2;
            }
        }
        else if(i==10)
        {
            for(int j=0; j<10; j++)
            {
                if(a[j]=='X')
                ans+=1;
            }
        }
    }

    cout<<ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}

















    // for(int i=0; i<100; i++)
    // {
    //     // cout<<i<<',';
    //     if((i+1)%10==0)cout<<i+1<<',';//<<endl;
    // }

    // for(int i=1; i<=10; i++)
    // {
        // string a;
        // cin>>a;

        // for(int j=0; j<5; j++)
        // {
        //     // if((j+1)%5 )
        //     // if(a[(j+1)%5]=='X')
        //     // ans+=(j+1)%5;
        //     if(a[j]=='X')
        //     ans+=j+1;
        // }
        // for(int j=5; j<10; j++)
        // {
        //     if(a[j]=='X')
        //     ans+=5-(j%5)-1;
        // }

    // }
    














    // for(int i=0; i<5; i++)
    // {
    //     for(int j=0; j<10; j++)
    //     {
    //         if(a[i][j])
    //     }
    // }




    // for(int i=0; i<10; i++)
    // {
    //     cin>>a[i];
    // }
    

    
    // for(int i=0; i<10; i++)
    // {
    //     for(int j=0; j<10; j++)
    //     {
    //         if(a[0][j]=='X' || a[9][j]=='X' || a[i][0]=='X' || a[i][9]=='X')
    //         ans+=1;
    //         else if(a[1][j]=='X' || a[8][j]=='X' || a[i][1]=='X' || a[i][8]=='X' && j!=0 && j!=9 && i!=0 && i!=9)
    //         ans+=2;
    //         else if(a[2][j]=='X' || a[7][j]=='X' || a[i][2]=='X' || a[i][7]=='X' && j!=1 && j!=8 && i!=1 && i!=8)
    //         ans+=3;
    //         else if(a[3][j]=='X' || a[6][j]=='X' || a[i][3]=='X' || a[i][6]=='X' && j!=2 && j!=7 && i!=2 && i!=7)
    //         ans+=4;
    //         else if(a[4][j]=='X' || a[5][j]=='X' || a[i][4]=='X' || a[i][5]=='X' && j!=3 && j!=6 && i!=3 && i!=6)
    //         ans+=5;
    //         else if(a[5][j]=='X' || a[4][j]=='X' || a[i][5]=='X' || a[i][4]=='X' && j!=4 && j!=5 && i!=4 && i!=5)
    //         ans+=5;
    //         else if(a[6][j]=='X' || a[3][j]=='X' || a[i][6]=='X' || a[i][3]=='X' && j!=5 && j!=4 && i!=5 && i!=4)
    //         ans+=4;
    //         else if(a[7][j]=='X' || a[2][j]=='X' || a[i][7]=='X' || a[i][2]=='X' && j!=6 && j!=3 && i!=6 && i!=3)
    //         ans+=3;
    //         else if(a[8][j]=='X' || a[1][j]=='X' || a[i][8]=='X' || a[i][1]=='X' && j!=7 && j!=2 && i!=7 && i!=2)
    //         ans+=2;
    //         else
    //         ans+=1;
    //     }
    // }