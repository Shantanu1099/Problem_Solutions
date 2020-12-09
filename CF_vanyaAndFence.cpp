#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n; cin >> n;
	int arr[n];
	int h; cin >> h;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] > h)
			count += 2;
		else
			count++;
	}
	cout << count;

	return 0;
}