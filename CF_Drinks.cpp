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

int n; cin>>n;
int arr[n];
double count = 0;
for(int i = 0; i < n; i++)
{
	cin>>arr[i];
	count += arr[i];
}
cout<<setprecision(14)<<count/n;	

return 0;
}
