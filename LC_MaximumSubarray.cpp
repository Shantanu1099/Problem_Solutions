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
    int maxSubArray(vector<int>& nums) {
        int max_i = INT_MIN;
        int count = 0;
        for(auto x : nums){
            count+=x;
            max_i = max(count, max_i);
            if(count < 0)
                count = 0;
        }
        return max_i;

        //Second Way..Both approaches are same, just upper is short a little 

    //  if(nums.size()<=1){
    //      return nums.front();
    //  }
    // int sum = 0;
    // int cnt_1 = INT_MIN;
    // for(auto val : nums){
    //     sum+=val;
    //     cnt_1 = max(sum, cnt_1);
    //     if(sum < 0)
    //         sum = 0;
    // }
    // return cnt_1;
    }
};

int main(){
Solution S;
int input;
vi nums;
while(cin>>input){
nums.pb(input);
}
cout<<S.maxSubArray(nums)<<endl;

    return 0;
}
