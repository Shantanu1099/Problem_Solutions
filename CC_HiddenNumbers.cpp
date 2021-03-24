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
lli n; cin>>n;
lli a = 0;
lli b = 0;
for(int i = 1; i <= n; i++)
{		
	if(n%2!=0){
		a = i;
		b = n/i;
		cout<<a<<" "<<b<<endl;
		break;
	}
	else if(n%2==0){
		i = i*2;
		a = i;
		b = n/i;
		cout<<a<<" "<<b<<endl;
		break;

	}
	else
	{
		continue;
	}

}

}
					
return 0;
}
