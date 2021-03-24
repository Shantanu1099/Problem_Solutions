#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

// Brute Force Approach T.C. -> O(n^2)
class Solution{
public:
	vector<int>twoSum(vector<int> nums, int target){
		vi arr(2);
		for(int i = 0; i < nums.size(); i++)
		{
			for(int j = i+1; j < nums.size(); j++)
			{
			if(nums[i]+nums[j] == target){
			arr[0] = i;
			arr[1] = j;
			}
			}
		}
		return arr;
	}
};


// Optimised Approach T.C.=> O(n)
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

//Use One Class At A time

// int main(){
// 	Solution s;
// 	vi arr;
// 	arr = s.twoSum({2,7,11,15},9);
// 	for(int i = 0; i < arr.size(); i++)
// 	{
// 	cout<<arr[i]<<'\t';
// 	}

// 	return 0;
// }