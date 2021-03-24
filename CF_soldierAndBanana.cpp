#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int k; cin >> k;
	ll n; cin >> n;
	int w; cin >> w;
	ll money = 0;
	ll totalMoney = 0;
	int moneyReq = 0;
	for (int i = 1; i <= w; i++) {
		money = i * k;
		totalMoney += money;
	}
	if (totalMoney > n) {
		moneyReq = totalMoney - n;
		cout << moneyReq;
	}
	else
		cout << moneyReq;


	return 0;
}