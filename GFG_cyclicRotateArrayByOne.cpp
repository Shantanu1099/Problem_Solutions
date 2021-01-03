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
int n; cin>>n;
int arr[n];
forinput
int x = arr[n-1];
for(int i = n-1; i >= 0 ; i--)
{
arr[i] = arr[i-1];
}
arr[0] = x;
foroutput
cout<<endl;
}	
return 0;
}
