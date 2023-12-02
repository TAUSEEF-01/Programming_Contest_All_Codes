#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool compare_vectors(const vector<int> &x, const vector<int> &y)
{
    for (size_t i = 0; i < x.size(); ++i)
    {
        if (x[i] < y[i])
        {
            return true;
        }
        else if (x[i] > y[i])
        {
            return false;
        }
    }
    return false;
}


void answer()
{
    int N, K;
    cin >> N >> K;

    vector<vector<int>> vectors(N, vector<int>(K));
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            cin >> vectors[i][j];
        }
    }

    sort(vectors.begin(), vectors.end(), compare_vectors);

    for (const auto &vector : vectors)
    {
        for (auto &element : vector)
        {
            cout << right << setw(12) << element;
        }
        cout << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t=1;
    // cin>>t;

    for(int i=0; i<t; i++)
    {
        answer();
    }


    return 0;
}
