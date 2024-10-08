// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class segTree
{
public:
    void buildTree(vector<ll> &a)
    {
        init(a.size());
        build(a, 0, 0, size); // pass size
    }

    void updateVal(int pos, ll val)
    {
        update(pos, val, 0, 0, size);
    }

    ll getSum(int l, int r)
    {
        return totalSum(l, r, 0, 0, size);
    }

private:
    int size;
    vector<ll> sums;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        sums.assign(2 * size, 0LL); // 2 *  size
    }

    void build(vector<ll> &a, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            if (lx < (int)a.size())
            {
                sums[x] = a[lx]; // x -> lx
            }
            return;
        }

        int mid = (lx + rx) / 2;
        build(a, 2 * x + 1, lx, mid);
        build(a, 2 * x + 2, mid, rx);

        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    void update(int pos, ll val, int x, int lx, int rx)
    {
        if (rx - lx == 1)
        {
            sums[x] = val;
            return;
        }

        int mid = (lx + rx) / 2;
        if (pos < mid) // mid
            update(pos, val, 2 * x + 1, lx, mid);
        else
            update(pos, val, 2 * x + 2, mid, rx);

        sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
    }

    ll totalSum(int l, int r, int x, int lx, int rx)
    {
        if (lx >= r || l >= rx)
            return 0;

        if (lx >= l && rx <= r)
            return sums[x];

        int mid = (lx + rx) / 2;
        ll s1 = totalSum(l, r, 2 * x + 1, lx, mid);
        ll s2 = totalSum(l, r, 2 * x + 2, mid, rx);

        return s1 + s2;
    }
};

void answer()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    segTree s;
    s.buildTree(a);

    while (m--)
    {
        int task;
        cin >> task;

        if (task == 1)
        {
            int pos;
            cin >> pos;

            ll val;
            cin >> val;

            s.updateVal(pos, val);
        }
        else
        {
            int l, r;
            cin >> l >> r;

            ll sum = s.getSum(l, r);
            cout << sum << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin>>t;

    for (int i = 0; i < t; i++)
    {
        answer();
    }

    return 0;
}
