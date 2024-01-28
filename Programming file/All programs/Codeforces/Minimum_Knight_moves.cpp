//accepted
//http://www.spoj.com/problems/NAKANJ/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf=1e9+7;

const int M=1e5+10;
bool vis[8][8];
int level[8][8];


void reset()
{
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            vis[i][j]=false;
            level[i][j]=inf;
        }
    }
}


int coordinateX(string a)
{
    return a[0]-'a';
}

int coordinateY(string a)
{
    return a[1]-'1';
}


bool isValid(int x, int y)
{
    return x>=0 && x<8 && y>=0 && y<8;
}


vector<pair<int, int>> movements = {
    {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {-2, 1}, {-2,-1}, {-1, -2}, {1, -2}
};


void bfs(string source, string destination)
{
    int srcX=coordinateX(source), srcY=coordinateY(source);
    int desX=coordinateX(destination), desY=coordinateY(destination);

    queue<pair<int, int>> a;
    a.push({srcX, srcY});
    vis[srcX][srcY]=true;
    level[srcX][srcY]=0;

    while(!a.empty())
    {
        pair<int, int> v = a.front();
        int x=v.first, y=v.second;
        a.pop();
        vis[x][y]=true;

        for(auto movement: movements)
        {
            int childx= movement.first+x;
            int childy= movement.second+y;

            if(!isValid(childx, childy)) continue;
            if(!vis[childx][childy])
            {
                a.push({childx, childy});
                vis[childx][childy]= true;
                level[childx][childy] = level[x][y] + 1;
            }
        }
        if(level[desX][desY]!=inf)
        {
            break;
        }
    }

    cout<<level[desX][desY]<<endl;
}



void solve()
{
    string s1, s2;
    cin>>s1>>s2;

    reset();
    bfs(s1, s2);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        solve();
    }

    return 0;
}
