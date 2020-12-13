
// => Using Normal Logic of addition

// #include<bits/stdc++.h>
// using namespace std;

// int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// 	int n; cin >> n;
// 	int a = 0;
// 	int b = 1;
// 	int temp = 0;
// 	cout << a << " " << b << " ";
// 	for (int i = 0; i < n; i++) {
// 		temp = a + b;
// 		cout << temp << " ";
// 		a = b;
// 		b = temp;

// 	}

// 	return 0;
// }






// => Using Recursion

#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	for (int i = 0; i < n ; i++) {
		cout << fibonacci(i) << " ";
	}
	return 0;
}