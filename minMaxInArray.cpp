// 1- UnOptimised
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	int arr[] = {23, 334, 5, 45465, 65, 344, 57, 67};
// 	int min = 0, max = 1;
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	for (int i = 0; i < size; i++) {
// 		cin >> arr[i];
// 	}
// 	for (int i = 0; i < size; ++i)
// 	{
// 		if (arr[min] > arr[i]) {
// 			swap(arr[min], arr[i]);
// 		}
// 		if (arr[max] < arr[i])
// 			swap(arr[max], arr[i]);
// 	}
// 	cout << "Minimum is : " << arr[min] << " & Maximum is : " << arr[max] << endl;

// 	return 0;
// }



// 2- Nope !! Not Yet Optimised ( NAIVE METHOD )
// #include<bits/stdc++.h>
// using namespace std;
// struct Pair
// {
// 	int max;
// 	int min;
// };
// struct Pair getMinMax(int arr[],  int size) {
// 	struct Pair minmax;
// 	minmax.min = arr[0];
// 	minmax.max = arr[1];
// 	if (size == 1) {
// 		minmax.min = arr[0];
// 		minmax.max = arr[0];
// 		return minmax;
// 	}
// 	else if (size == 2) {
// 		int temp;
// 		if (arr[0] > arr[1]) {
// 			minmax.min = arr[1];
// 			minmax.max = arr[0];
// 			return minmax;
// 		}
// 		else {
// 			minmax.min = arr[0];
// 			minmax.max = arr[1];
// 			return minmax;
// 		}
// 	}
// 	else {
// 		// int temp;
// 		for (int i = 2; i < size; i++) {
// 			if (arr[i] >= minmax.max) {
// 				// temp = minmax.min;
// 				// minmax.min = minmax.max;
// 				minmax.max = arr[i];
// 				// low++;
// 				// high++;

// 			}
// 			if (arr[i] < minmax.min) {
// 				// low++;
// 				// high++;
// 				minmax.min = arr[i];
// 			}

// 		}
// 		return minmax;

// 	}
// 	EXIT_SUCCESS;
// }
// int main(void) {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

// 	struct Pair minmax;
// 	int arr[] = {23, 434, 545, 65, 76, 76, 6, 85};
// 	int size = sizeof(arr) / sizeof(arr[0]);
// 	int low = 0, high = size - 1;
// 	if (size != 0) {
// 		minmax = getMinMax(arr, size);
// 		cout << "Minimum is : " << minmax.min << endl;
// 		cout << "Maximum is : " << minmax.max << endl;
// 		EXIT_SUCCESS;
// 	}
// 	else {
// 		return 1;
// 	}

// }



// 3-Divide & Conquer Used OPtimised COde
#include<bits/stdc++.h>
using namespace std;
struct Pair
{
	int min;
	int max;
};
struct Pair getMinMax(int arr[], int low, int high) {
	Pair minmax;
	int mid;
	struct Pair mml, mmr;
	if (low == high) {
		minmax.min = arr[low];
		minmax.max = arr[low];
		return minmax;
	}
	else if (high == low + 1) {
		if (arr[low] > arr[high]) {
			minmax.min = arr[high];
			minmax.max = arr[low];
			return minmax;
		}
		else
		{
			minmax.min = arr[low];
			minmax.max = arr[high];
			return minmax;
		}
	}
	else {
		mid = low + (high - low) / 2;
		mml = getMinMax(arr, low, mid);
		mmr = getMinMax(arr, mid + 1, high);
		(mml.min > mmr.min) ?
		minmax.min = mmr.min :
		             minmax.min = mml.min;
		(mml.max > mmr.max) ? minmax.max = mml.max : minmax.max = mmr.max;
		return minmax;

	}
	EXIT_SUCCESS;
}
int main() {
	//Use below lines only when giving I/O in input and receiving output text file
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	struct Pair minmax;
	int arr[] = {34, 24, 354, 54, 5, 65, 7, 6676, 3343};
	int size = sizeof(arr) / sizeof(arr[0]);
	if (size != 0) {
		minmax = getMinMax(arr, 0, size - 1);
		cout << "Minimum Ele : " << minmax.min << endl;
		cout << "Maximum Ele : " << minmax.max << endl;
		EXIT_SUCCESS;
	}
	else {
		return 1;
	}
}
