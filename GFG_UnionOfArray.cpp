#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr1[i];}
#define forinput2 for(int i = 0; i<m ; i++){cin>>arr2[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

int incSort(int arr[], int n){
	for(int i = 0; i < n ; i++){
	for(int j = i+1; j < n; j++){
		if(arr[i]>arr[j]){
			swap(arr[i], arr[j]);
		}
	}
}
return arr;
}

void arrUnion(int arr1[], int arr2[], int n, int m){
	int i = 0, j = 0, count = 0;
	while(i < n && j < m){
		if(arr1[i] < arr2[j]){
			i++;
			count++;
		}
		else if(arr1[i] > arr2[j]){
			j++;
			count++;
		}
		else{
			i++;
			j++;
			count++;
		}
	} 
	while(i < n){
		i++;
		count++;

	}
	while(j < m){
		j++;
		count++;
	}
	cout<<count<<endl;
}

int main(){
int t; cin>>t;
while(t--){
	int n; cin>>n;
	int m; cin>>m;
	int arr1[n];
	int arr2[m];
	forinput
	forinput2
	for(int i = 0; i < n; i++)
	{
	if(arr1[i]>arr1[i+1]){
		incSort(arr1, n);
		break;
	}
	}
	for(int i = 0; i < m; i++)
	{
	if(arr2[i] > arr2[i+1]){
		incSort(arr2, m);
		break;
	}
	}
	arrUnion(arr1, arr2, n, m);
	
}
					
return 0;
}
