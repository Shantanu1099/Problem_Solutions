#include<bits/stdc++.h>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string name; cin >> name;
	int size = name.length();
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1 ; j <= size; j++) {
			if (name[i] == name[j])
				count++;
			else
				continue;
		}
	}
	count = size - count;
	if (count % 2 == 0 && count > 0)
		cout << "CHAT WITH HER!";
	else
		cout << "IGNORE HIM!";

	return 0;
}