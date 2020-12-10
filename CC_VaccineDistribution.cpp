#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dIsGreater(int n, int d, int arr[]) {
	ll countCritical = 0;
	ll dayCr = 0;
	ll dayNormal = 0;
	ll countNormal = 0;
	ll totalDays = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= 80 || arr[i] <= 9) {
			countCritical++;
		}
	}
	dayCr = ceil(countCritical / d);
	remPeople = n - countCritical;
	dayNormal = ceil(remPeople / d);
	totalDays = dayNormal + dayCr;
	cout << totalDays << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	ll n;
	ll d;
	while (t--) {
		cin >> n;
		cin >> d;
		int arr[n] ;
		// ll countCritical = 0;
		// ll dayCr = 0;
		// ll dayNormal = 0;
		// ll remPeople = 0;
		// ll totalDays = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (d == 1) {
			cout << n << endl;
		}
		else
			dIsGreater(n, d, arr);
		// for (int i = 0; i < n; i++) {
		// 	if (arr[i] >= 80 || arr[i] <= 9) {
		// 		countCritical++;
		// 	}
		// 	else {
		// 		continue;
		// 	}
		// }
		// dayCr = ceil(countCritical / d);
		// remPeople = n - countCritical;
		// dayNormal = ceil(remPeople / d);
		// totalDays = dayNormal + dayCr;
		// cout << totalDays << endl;
	}

	return 0;
}


























// int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

// 	int t; cin >> t;
// 	ll n;
// 	ll d;
// 	while (t--) {
// 		cin >> n;
// 		cin >> d;
// 		int arr[n] ;
// 		ll countCritical = 0;
// 		ll dayCr = 0;
// 		ll dayNormal = 0;
// 		ll remPeople = 0;
// 		ll totalDays = 0;
// 		// if (d == 1) {
// 		// 	cout << n << endl;
// 		// }
// 		if (d > 1) {
// 			for (int i = 0; i < n; i++) {
// 				cin >> arr[i];
// 			}
// 			for (int i = 0; i < n; i++) {
// 				if (arr[i] >= 80 || arr[i] <= 9) {
// 					countCritical++;
// 				}
// 			}
// 			dayCr = ceil(countCritical / d);
// 			remPeople = n - countCritical;
// 			dayNormal = ceil(remPeople / d);
// 			totalDays = dayNormal + dayCr;
// 			cout << totalDays << endl;
// 			continue;
// 		}
// 		else {
// 			cout << n << endl;
// 			continue;
// 		}
// 	}

// 	return 0;
// }