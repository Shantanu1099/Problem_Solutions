#include<bits/stdc++.h>
using namespace std;

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n;
	cin >> n;
	int a, b, c, d;

	while (true) {
		n++;
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10) % 10;
		d = n  % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			break;
		}
		else {
			continue;
		}
	}
	cout << n;

	return 0;
}