#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        if (nums[nums.size() - 1] != 0)
            nums.push_back(0);
        int ma = 0;

        while (i < nums.size())
        {
            while (nums[i] != 0)
                i++;
            ma = max(ma, i - j);
            i++;
            j = i;
        }
        return ma;
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << s1.findMaxConsecutiveOnes(nums);
}