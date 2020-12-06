#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int d1; cin >> d1;
	int v1; cin >> v1;
	int d2; cin >> d2;
	int v2; cin >> v2;
	int p; cin >> p;
	int day = 1;
	int count = 0;
	int sum = 0;
	while (true) {
		if (day >= d1)
			sum += v1;

		if (day >= d2)
			sum += v2;
		count++;
		if (sum >= p)
			break;
		day++;
	}
	cout << count << endl;
	return 0;
}