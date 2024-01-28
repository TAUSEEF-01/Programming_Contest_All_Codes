#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int nxt() {
	int x;
	cin >> x;
	return x;
}

void solve() {
	long long a, b, c;
	cin >> a >> b >> c;
	long long ans = 0;
	if (c >= b) {
		ans = c / b * 2 - 1;
	}
	// ax + by <= c
	// x + 2y -> max
	for (long long x : {1, 2}) {
		if (a * x > c) {
			continue;   
		}
		long long y = (c - a * x) / b;
		ans = max(ans, x + 2 * y);
	}
	for (long long y : {0, 1, 2}) {
		if (b * y > c) {
			continue;
		}
		long long x = (c - b * y) / a;
		if (x == 0) {
			continue;
		}
		ans = max(ans, x + 2 * y);
	}
	cout << ans << "\n";
}

int main() {
	int t = nxt();
	for (int i = 1; i <= t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}

	return 0;
}