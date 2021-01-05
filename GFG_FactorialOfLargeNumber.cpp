#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

int factoria(lli n){
	if(n>1){
return n*factori(n-1);
}
else if(n == 1){
	return 1;
}
else{
	return 0;
}
}

int main(){
int t; cin>>t;
while(t--){
	lli n; cin>>n;
	cout<<factoria(n)<<endl;
}				
return 0;
}
