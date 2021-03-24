#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
typedef int i_, i__, _i, __i;
#define pb push_back
#define pob pop_back

int main(){
int n; cin>>n;
int k; cin>>k;
int count = 0;
vi arr;
for(int i = 0; i < n; i++)
{
int ip;
cin>>ip;
arr.pb(ip);
}
for(int i = 0; i < n; i++)
{
arr[i] = arr[i]+k;
if(arr[i] < 5 && arr[i] >= 0){
	count++;
}
}
count/=3;
cout<<count<<endl;
return 0;
}