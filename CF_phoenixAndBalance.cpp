#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back


int main(){

int t; cin>>t;
while(t--){
	int count = 0;
	int count2 = 0;
	int n; cin>>n;
	int n_num;
	int num = 2;
	for(int i = 1; i < n; i++){
		num*=2;
	}
	int half = n / 2;
	// n_num = num/2;
	for(int i = 1; i <= half; i++){
	n_num = num/2;
	count2+=n_num;
	}
	count = num - count2;
	cout<<count2<<endl;
}
					
return 0;
}
