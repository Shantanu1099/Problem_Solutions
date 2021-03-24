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
	lli a; cin>>a;
	lli b; cin>>b;
	lli c; cin>>c;
	lli n; cin>>n;
	lli total_sum;
	lli g_num;
	lli r_sum;
	total_sum = a+b+c;
	g_num = a >= b ? a : b ;
	g_num = g_num >= c ? g_num : c;
	g_num = g_num*3;
	r_sum = g_num - total_sum;
	total_sum = total_sum + r_sum;
	n = n - r_sum;
	if(n % 3 == 0 && g_num == total_sum){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

}
					
return 0;
}



