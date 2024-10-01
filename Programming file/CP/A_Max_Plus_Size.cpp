// accepted

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void answer() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (n == 1) {
    cout << a[0] + 1 << endl;
    return;
  }

  vector<int> b = a;
  sort(a.begin(), a.end());
  if (n % 2 == 0) {
    cout << a[n - 1] + n / 2 << endl;
    return;
  }

  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0 && b[i] == a[n - 1]) {
      flag = 1;
      break;
    }
  }

  if (flag)
    cout << a[n - 1] + (n + 1) / 2 << endl;
  else
    cout << a[n - 1] + n / 2 << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    answer();
  }

  return 0;
}
