#include<bits/stdc++.h>

using namespace std;

int sameString(string s1, string s2);
string uppercase(string s);

int main()
{
    string s1;
    string s2;

    cin>> s1>>s2;
    if(sameString(s1, s2) == 0)
    {
        cout<<0<< endl;
    }
    else if(sameString(s1, s2) > 0)
    {
        cout<<1<< endl;
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}

int sameString(string s1, string s2)
{

    if(uppercase(s1).compare(uppercase(s2)) == 0);
    {
        return 0;
    }
    if(uppercase(s1).compare(uppercase(s2)) > 0)
    {
        return 1;
    }
    if(uppercase(s1).compare(uppercase(s2)) < 0)
    {
        return -1;
    }

}

string uppercase(string s)
{
    string converted;
    for( short i=0; i<s.length(); ++i)
    converted += toupper(s[i]);

    return converted;
}
