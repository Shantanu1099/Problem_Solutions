//Flag
// #include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
// #define	ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	int n;
	int d;
	while (t--) {
		cin >> n;
		cin >> d;
		int arr[n] ;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int countCritical = 0;
		int dayCr = 0;
		int dayNormal = 0;
		int countNormal = 0;
		int totalDays = 0;
		for (int  i = 0; i < n; i++) {
			if (arr[i] >= 80 || arr[i] <= 9) {
				countCritical++;
			}
			else {
				countNormal++;
			}
		}
		dayCr = ceil(countCritical / d);
		dayNormal = ceil(countNormal / d);
		totalDays = dayNormal + dayCr;
		cout << totalDays << endl;
		cout << dayNormal << endl;
	}
	return 0;
}