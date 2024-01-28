#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define all(a) (a.begin(), a.end())
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}



void resoudre()
{
    ll m, k, a1, ak;
    cin>>m>>k>>a1>>ak;

    if((a1>=m) || (m%k==0 && (m/k)<=ak) || ((m-m%k)/k<=ak && m%k<=a1))
    {
        cout<<0<<endl;
    }

    //
    else if(a1==0 && ak==0)
    {
        cout<<(m/k)+m%k<<endl;
    }

    //
    else if(a1!=0 && ak==0)
    {
        ll mino= inf;
        for(int i=0; i<=a1; i++)
        {
            if((m-i) % k == 0)
            {
                mino= min(mino, (m-i)/k);
                break;
            }
            else if(m-(a1-i) % k == 0)
            {
                mino= min(mino, i+(m-(a1-i))/k);
                break;
            }
        }
        
        for(int i=0; i<m; i++)
        {
            if(m-a1-i == 0)
            {
                mino= min(mino, (ll)i);
                break;
            }
            else if((m-(a1+i)) % k == 0)
            {
                mino= min(mino, i+(m-(a1+i))/k);
                break;
            }
        }
        cout<<mino<<endl;
    }

    //
    else if(a1==0 && ak!=0)
    {
        if(m-ak*k>=0)
        {
            cout<<(m-ak*k)/k+(m-ak*k)%k<<endl;
        }
        else
        {
            ll mrk=m/k;
            cout<<m-mrk*k<<endl;
        }
    }

    //
    else 
    {
        ll mino= inf;
        if(m-ak*k>=0) 
        {
            mino= min(mino, m-ak-a1);
            ll mrk= k*ak;
            for(int i=0; i<=a1; i++)
            {
                if((m-i) % k == 0)
                {
                    mino= min(mino, (m-i)/k);
                    break;
                }
                else if((m-a1-i) % k == 0)
                {
                    mino= min(mino, (m-a1-i)/k);
                    break;
                }
                else if((m-((mrk*ak-a1)-i)) % k == 0)
                {
                    mino= min(mino, 1LL);
                    break;
                }
            }
            for(int i=0; i<=k; i++)
            {
                if((m-((mrk*ak-a1)+i)) % k == 0)
                {
                    mino= min(mino, (ll)i+(m-((mrk*ak-a1)+i))/k);
                    break;
                }
            }
        }

        //
        else 
        {
            ll mrk= (m/k)*ak;
            mino= min(mino, m-mrk*ak-a1);

            for(int i=0; i<=a1; i++)
            {
                if((m-i) % k == 0)
                {
                    mino= min(mino, (m-i)/k);
                    break;
                }
                else if((m-a1-i) % k == 0)
                {
                    mino= min(mino, (m-a1-i)/k);
                    break;
                }
                else if((m-((mrk*ak-a1)-i)) % k == 0)
                {
                    mino= min(mino, 1LL);
                    break;
                }
            }
            for(int i=0; i<=k; i++)
            {
                if(m-((mrk*ak-a1)+i)==0)
                {
                    mino= min(mino, (ll)i);
                    break;
                }
                else if((m-((mrk*ak-a1)+i)) % k == 0)
                {
                    mino= min(mino, (ll)i+m-((mrk*ak-a1)+i)/k);
                    break;
                }
            }
        }
        cout<<mino<<endl;
    }
}


int main()
{
    fast;
    
    // setIO();

    int test; cin>>test;

    while(test--) resoudre();

    return 0;
}




















    // if((m-(m/k)*k <= a1 && ak >= (m/k)) || (a1 >= m) || (m%(ak*k) == 0))
    // {
    //     cout<<0<<endl;
    // } 
    // else if(m-(m/k)*k <= a1 && ak < (m/k))
    // {
    //     if(m-k*ak <= a1)
    //     {
    //         cout<<0<<endl;
    //     }
    //     else
    //     {
    //         ll mino= inf;
    //         mino= min(mino, m-ak*k-a1);
    //         ll back_count=inf, a1c=a1;
    //         while(a1c--)
    //         {
    //             if((m-ak*k-a1c) % k == 0)
    //             {
    //                 back_count= (m-ak*k-a1c) / k;
    //                 break; 
    //             }
    //         }
    //         mino= min(mino, back_count);
    //         cout<<mino<<endl;
    //     }
    // }
    // else
    // {
    //     ll closest=m-ak*k;
    //     if(m-ak*k>=0) closest=m-ak*k;
    // }