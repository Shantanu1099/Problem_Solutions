#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n; cin >> n;
	char ch[n]; cin >> ch;
	int antonCount = 0;
	int danikCount = 0;
	for (int i = 0; i < n; i++) {
		if (ch[i] == 'A') {
			antonCount++;
		}
		else {
			danikCount++;
		}
	}
	if (antonCount > danikCount) {
		cout << "Anton";
	}

	else if (antonCount == danikCount) {
		cout << "Friendship";
	}
	else {
		cout << "Danik";
	}

	return 0;
}