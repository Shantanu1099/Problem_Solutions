#include <iostream>
using namespace std;

int main() {
	// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	for (int j = 0; j < t; j++) {
		int n; cin >> n;
		int k; cin >> k;
		int A[n];
		//  if(n%2==0){
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0) {
				A[i - 1] = -i;
			}
			else {
				A[i - 1] = i;
			}
		}

		int count = n / 2;
		if (n % 2 != 0) {
			count += 1;

		}

		int neg = (n - k);
		if (neg > count)
		{
			for (int i = n - 1; i >= 0; i--) {
				if (A[i] > 0) {
					A[i] = A[i] * -1;
					count++;
				}
				if (count == neg) break;
			}

		}
		else if (neg < count) {
			for (int i = n - 1; i >= 0; i--) {
				if (A[i] < 0) {
					A[i] = A[i] * -1;
					count--;
				}
				if (count == neg) break;
			}

		}
		for (int i = 0; i < n; i++) {
			cout << A[i] << " ";
		}
	}
	return 0;

}