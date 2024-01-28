#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        int n;
        scanf("%d", &n);

        if (n <= 10)
            cout << 0 << ' ' << n << endl;
        else
            cout << 10 << ' ' << n - 10 << endl;
    }
    return 0;
}
