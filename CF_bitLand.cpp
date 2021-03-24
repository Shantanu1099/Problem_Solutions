#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n; cin >> n;
	int x = 0;
	char ch[4];
	while (n--) {
		cin >> ch;
		// pre - Operation of increment-decrement
		if (ch[0] == '+' || ch[0] == '-') {
			if (ch[0] == '+')
				++x;
			else
				--x;
		}
		// post - Operation of increment-decrement
		else {
			if (ch[2] == '+')
				x++;
			else
				x--;
		}
	}
	cout << x;
	return 0;
}