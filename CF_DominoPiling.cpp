#include<bits/stdc++.h>
using namespace std;
int numOfDomino(int m, int n) {
	int p = m * n;
	if (p == 1)
		return 0;
	else {
		int numD = p / 2;
		return numD;
	}
}
int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int m; cin >> m;
	int n; cin >> n;
	cout << numOfDomino(m, n);

	return 0;
}