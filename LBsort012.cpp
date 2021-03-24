#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int size) {
	int count0 = 0, count1 = 0, count2 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0)
			count0++;
		else if (arr[i] == 1)
			count1++;
		else
			count2++;
	}
	for (int i = 0 ; i < count0; ++i)
	{
		arr[i] = 0;
	}

	for (int i = count0 ; i < (count0 + count1); ++i)
	{
		arr[i] = 1;
	}
	for (int i = (count0 + count1) ; i < (count0 + count1 + count2); ++i)
	{
		arr[i] = 2;
	}
}
void printArr(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		cout << arr[i] << '\t';
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int arr[] = {0, 2, 1, 2, 1, 0, 0, 0, 1, 2, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	sort012(arr, size);
	printArr(arr, size);
	return 0;
}