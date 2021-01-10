class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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