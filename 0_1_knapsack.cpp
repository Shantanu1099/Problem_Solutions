#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int knapsack(int val[], int wt[], int w, int n) {

	//Base Condition in recursion
	if (w == 0 || n == 0)
		return 0;
	//Checking whether the weight of n is greater than the knapsack space
	else if (wt[n - 1] > w)
		return knapsack(val, wt, w, n - 1);
	else
		return max(val[n - 1] + knapsack(val, wt, w - wt[n - 1], n - 1), knapsack(val, wt, w, n - 1));
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int val[] = {80, 60, 100, 120};
	int wt[] = {25, 10, 20, 30};
	int w = 80;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapsack(val, wt, w, n) << endl;

	return 0;
}