#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int> arr;
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back


int main(){

int n; cin>>n;
int k; cin>>k;
int time = k;
int count = 0;
for(int i = 1; i <= n; i++)
{
time = time + (5 * i);
if(time > 240){
break;
}
else{
	count++;
}
}
cout<<count<<endl;
					
return 0;
}
