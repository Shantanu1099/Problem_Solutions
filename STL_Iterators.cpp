#include<bits/stdc++.h>
#include<typeinfo>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back


int main(){
	// vector<vector<pair<int, int>> > v;
	// int n; cin >> n;
	// vector<pair<int, int> > temp;
	// for(int i = 0; i < n ; ++i){
	// 	int x, y; cin >> x >> y;
	// 	temp.pb(make_pair(x, y));
	// }
	// v.pb(temp);
	// cout<<v[0].size();
	// for(int i = 0 ; i < v[0].size(); ++i){
	// 	cout << v[0][i].first << " " << v[0][i].second << endl;
	// }

	// vector<vector<pair<int, int>>> v = {{{33, 44}, {443, 665}}, {{34,43}, {5343, 35}}};
	// FOr VECTOR OF VECTORS OF PAIRS
	// vector<vector<pair<int, int>>> :: iterator row;
	// vector<pair<int, int>> :: iterator col;
	// for( row = v.begin(); row != v.end(); ++row){
	// 	for(col = row->begin(); col != (*row).end(); ++col){
	// 		cout << col->first << " " << col->second << endl;
	// 	}
	// 	cout << endl;
	// }



	// For VECTOR of VECTORS...
	// vector<vector<int>> :: iterator row;
	// vector<int> :: iterator col;
	// for( row = v.begin(); row != v.end(); ++row){
	// 	for(col = (*row).begin(); col != (*row).end(); ++col){
	// 		cout << (*col) << " ";
	// 	}
	// 	cout << endl;
	// }



	// vector<pair<int, int>> v = {{33, 44}, {443, 665}};
	// vector<int> v1 = {33, 44, 443, 665};
	// cout<<v[0][1].first << " " << v[0][1].second << endl;
	// vector<vector<pair<int, int>>> :: iterator it ;
	// for(int i = 0 ; i < v.size(); ++i){
	// 	for(it = v[i].begin(); it != v[i].end(); ++it){
	// 	cout << (it->first) << " " << (it->second) << endl;
	// 	// cout << (*it).first << " " << (*it).second << endl;
	// }	
	// }
	// for(it = v[0].begin(); it != v[0].end(); ++it){
	// 	// cout << (it->first) << " " << (it->second) << endl;
	// 	cout << (*it).first << " " << (*it).second << endl;
	// }
	// cout << endl;




	// Short - for loops - (Range Based)
	vector<int> v1 = {43, 353, 544, 665, 65};
 	for(int value: v1 ){
		cout << value << endl;
	}
	cout<<endl;


	// Example of Passig through reference and doing increment operation otherwise only the 'COPY' is Passed
	for(int &value: v1 ){
		value++;
	}

	for(int value: v1 ){
		cout << value << endl;
	}
	cout<<endl;
	// for(pair<int, int> value: v ){
	// 	cout << value.first << " " << value.second << endl;
	// }




	// Short Loops - Auto Keyword & Range Based Combined for better readability and clean code
	auto a = 11.33;
	cout << typeid(a).name() << " - " << a;


	return 0;
}