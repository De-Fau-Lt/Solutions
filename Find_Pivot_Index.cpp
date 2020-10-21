#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int pivotIndex(vector<int>& nums)
    {
        int sum=0,l_sum=0;

        for(auto x:nums)
            sum+=x;
        for(int i=0;i<nums.size();i++)
        {
            if(l_sum == sum-l_sum-nums[i])
                return i;
            l_sum+=nums[i];
        }
        return -1;
    }
};

int main()
{
    Solution s1;
    vector<int> nums={1,2,3};
    cout << s1.pivotIndex(nums);
}