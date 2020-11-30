#include<bits/stdc++.h>
using namespace std;
void even(int w) {
	if (w % 2 == 0 && w != 2)
		cout << "YES";
	else
		cout << "NO";
}

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int w; cin >> w;
	even(w);

	return 0;
}