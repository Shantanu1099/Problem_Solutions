#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int limak; cin >> limak;
	int bob; cin >> bob;
	int i = 1;
	int count = 0;
	while (i) {
		if (limak > bob)
			i--;
		else if (limak == bob) {
			count++;
			i--;
		}

		else {
			limak *= 3;
			bob *= 2;
			count++;
		}
	}
	cout << count;


	return 0;
}