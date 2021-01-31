#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
class Solution {
public:
    // BitManipulationApproach
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for (int val: nums) {
            res ^= val;
        }
        
        for (int i=1; i<=nums.size(); i++) {
            res ^= i;
        }
        
        return res;
    }

    // Adding Approach
    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     int count = (n*(n+1))/2; //Optimal Ligic than Line 16
    //     int sum = accumulate(nums.begin(), nums.end(), 0);
    //     // for(int it = 0; it <= nums.size(); it++){
    //     //     count+=it;
    //     // }
    //     int miss_num = count - sum;
    //     return miss_num;
    // }
    
};

int main(){

Solution S1;
vector<int> nums;
// cout<<S1.missingNumber(nums)<<endl;
int input;
while(cin>>input){
    nums.pb(input);
}
cout<<S1.missingNumber(nums)<<endl;
    return 0;
}