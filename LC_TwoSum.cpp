#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

// Optimised Approach
class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int> arr(2);
        unordered_map<int, int> mp;
        for(int i = 0;i<nums.size();++i){
            mp[nums[i]] = i;
        }
        for(int i = 0; i < nums.size();++i){
            int num = target - nums[i];
            if(mp[num] && mp[num] != i){
                arr[0] = i;
                arr[1] = mp[num];
            }
        }
    return arr;
    }
};
int main(){
	Solution s;
	vi arr;
	arr = s.twoSum({2,7,11,15},9);
	for(int i = 0; i < arr.size(); i++)
	{
	cout<<arr[i]<<'\t';
	}

	return 0;
}