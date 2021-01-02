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
	int sum = 0;
	int n; cin>>n;
	int k; cin>>k;
	int d; cin>>d;
	int arr[n];
	forinput
	for(int i = 0; i < n; i++)
	{
	sum+=arr[i];
	}
	sum=sum/k;
	if(sum>=d){
		cout<<d<<endl;
	}
	else{
		cout<<sum<<endl;
	}
}
					
return 0;
}
