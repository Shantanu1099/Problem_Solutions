#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

int binarySearch(int arr[], int n, int ele){
	int low = 0;
	int high = n-1;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(arr[mid] == ele){
			return mid;
		}
		else if(mid > ele){
			high = mid - 1;
		}
		else{
			low = mid + 1;
		}
	}
	
		return 1;
}

int main(){
	// "Enter the value of test cases you want "
int t; cin>>t;
while(t--){
	// "Enter the size of array "
	int n; cin>>n;
	int arr[n];
	// "Enter the array with n size separated by a single space "
	forinput
	// "Enter tHe Element you wanna Search "
	int ele; cin>>ele;
	int answer = binarySearch(arr, n, ele);
	cout<<answer<<endl;
}
					
return 0;
}


  // 9151666779