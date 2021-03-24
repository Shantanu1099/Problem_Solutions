#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define forinput for(int i = 0; i<n ; i++){cin>>arr[i];}
#define foroutput for(int i = 0; i<n; i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back

// class Solution {
// public:
//     vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//      int k = n + m - 1;
//         n--, m--;
//         while(n >= 0 && m >= 0) {
//             if(nums1[m] >= nums2[n]) {
//                 nums1[k--] = nums1[m--];
//             } else {
//                 nums1[k--] = nums2[n--];
//             }
//         }
//         while(n >= 0){
//             nums1[k--] = nums2[n--]
//         }
//         return nums1;
//     }
// };

int main(){

    // Solution S1;

    vi nums1 = {1, 2, 3};
    vi nums2 = {2, 5, 6};
    int m =nums1.size();
    int n = nums2.size();
    // int input;
    // while(cin>>input){
    //     nums1.pb(input);
    // }
    // while(cin>>input){
    //     nums2.pb(input);
    // }
    // cout<<S1.merge(nums1, m, nums2,  n)<<endl;

    m--;
    n--;
    int count = m + n - 1;
    while(m >= 0 && n >= 0){
        if(nums1[m] > nums2[n]){
            nums1[count--] = nums1[m--];
        }
        else{
            nums1[count--] = nums2[n--];
        }
    }
    while(n >= 0){
        nums1[count--] = nums2[n--];
    }
    for(int i = 0; i < count; i++)
    {
    cout<<nums1[i]<<" ";
    }
                    
return 0;
}
