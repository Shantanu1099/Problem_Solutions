#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n; cin >> n;
	int t; cin >> t;
	char ch[n];
	cin >> ch;
	while (t--) {
		for (int i = 0; i < n; i++) {
			if (ch[i] == 'B' && ch[i + 1] == 'G') {
				swap(ch[i], ch[i + 1]);
				i++;
			}

			else
				continue;
		}
	}
	cout << ch;

	return 0;
}