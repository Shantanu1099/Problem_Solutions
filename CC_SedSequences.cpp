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
lli k; cin>>k;
lli arr[n];
int sum = 0;
int count = 0;
int num = 0;
forinput

for(int i = 0; i < n; i++)
{
    sum+=arr[i];
}
if(sum%k != 0){
	num = sum%k;
	arr[0]=arr[0]+num;
	count++;
}
cout<<count<<endl;

}	
return 0;
}
