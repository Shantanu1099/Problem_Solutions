#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back


void vecPairOP(vector<pair<int, int>> a){
	cout << "Size: " << a.size() <<endl;
	for(int i = 0; i < a.size(); ++i){
	cout << a[i].first << " " << a[i].second << endl;
}
	a.pb(make_pair(33, 55));
	for(int i = 0; i < a.size(); ++i){
	cout << a[i].first << " " << a[i].second << endl;
}
}

void vecOp(vector<int> & v){
cout << "Size of vector: "<< v.size() << endl;
	for(int i = 0; i < v.size(); ++i){
		cout<<v[i]<<" ";
}	cout << endl;
	cout<<"First " << endl;
	v.pb(23);
	cout << "Size of vector: "<< v.size() << endl;
	for(int i = 0; i < v.size(); ++i){
		cout<<v[i]<<" ";
		}	cout << endl;
	cout << "Second " << endl << endl;
}

int main(){

	// Nested vectors
	// VECTOR of Pairs
	vector<pair< int , int > > v = {{2, 3}, {5, 6}, {88, 44}};
	vecPairOP(v);
	cout << v[3].first << " " ;
	cout << v[3].second << endl;

	// 1 - Array of vectors
	int n; cin>>n;
	vector<int> v2[n];
	for(int i = 0; i < n; ++i ){
		int s; cin >> s;
		for(int j = 0; j < s; ++j){
			int ip ; cin>>ip;
			v2[i].pb(ip);
		}
	vecOp(v2[i]);
	}

	// vector<int> v;
	// v.pb(88);
	// vecOp(v);
	// v.pb(99);
	// vecOp(v);
	// v.pob();
	// vecOp(v);
	// vector<pair<int, string>> v2;
	// v2.pb({78, "LALA"});
	// vecPairOP(v2);
	// v2.pb(make_pair(88, "oohhh yeah"));
	// vecPairOP(v2);
	// v2.pob();
	// vecPairOP(v2);
	// vector<int> & v3 = v ;
	// v3 = v;
	// vecOp(v3);
	// v3.pb(101);
	// vecOp(v3);
	// vecOp(v);
	// return 0;
}