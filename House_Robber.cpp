#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        int dp[nums.size()+1];
        memset(dp,-1,sizeof(dp));
        
        dp[0]=nums[0];
        dp[1]=nums[1];
        dp[2]=nums[0]+nums[2];
        
        for(int i=3;i<nums.size();i++)
        {
            dp[i] = max(dp[i-2]+nums[i],dp[i-3]+nums[i]);
        }
        
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {2,7,9,3,1};
    cout << s1.rob(nums);
}