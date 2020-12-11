#include<bits/stdc++.h>
using namespace std;
int largestSum(int arr[], int size) {
	int max_so_far, max_ending_here;
	max_so_far = max_ending_here = 0;
	for (int i = 0; i < size; ++i) {
		max_ending_here += arr[i];
		if (max_ending_here < 0)
			max_ending_here = 0;

		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

	}
	return max_so_far;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {4, 3, -7, 6, -8, 6, -2, 9, 9, -9, 2};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Sum : " << largestSum(arr, size) << '\n';
	EXIT_SUCCESS;
}