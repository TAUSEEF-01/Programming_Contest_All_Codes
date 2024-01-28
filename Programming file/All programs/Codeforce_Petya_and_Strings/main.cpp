#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[200];
    char b[200];

    cin>> a>>b;
    int p= strlen(a);
    for(int i=0; i<p; i++)
    {
        if(a[i]>='a' || b[i]>='a')
        {
            a[i] = toupper(a[i]);
            b[i] = toupper(b[i]);
        }
        else{
            continue;
        }

    }

    for(int j=0; j<p; j++)

    {
        if(a==b)
        {
            cout<<0<<endl;
        }

        else if(a[j] > b[j])
        {
            cout<< 1<<endl;
            break;
        }
        else if(b[j] > a[j])
        {
            cout << -1<<endl;
            break;
        }
        else
        {
           continue;
        }
    }

    return 0;
}



/*
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
*/
