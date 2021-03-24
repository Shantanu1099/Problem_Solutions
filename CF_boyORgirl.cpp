#include<bits/stdc++.h>
using namespace std;
int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	string name; cin >> name;
	int size = name.length();
	int count = 0;
	sort(name.begin(), name.end());
	for (int i = 0; i < size; i++) {
		if (name[i] != name[i + 1]) {
			count++;
		}
	}
	if (count % 2 == 0 && count > 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	return 0;
}