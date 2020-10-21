#include <bits/stdc++.h>

typedef pair<int,int> pairs;

using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //linear
        if(k<0)
            return 0;
        
        unordered_map<int,int> mp;
        unordered_set<int> st;
        
        for(auto x:nums)
        {
            mp[x]++;
            st.insert(x);
        }
        
        int result = 0;
        
        for(auto x:st)
        {
            if(!k)
            {
                if(mp[x] > 1)
                    result++;
            }
            else
            {
                if(mp[x+k]>0)
                    result++;
            }
        }
        return result;


        //bruteforce
        /*set<pairs> st;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    if(abs(nums[i]-nums[j])==k)
                    {
                        int a = nums[i];
                        int b = nums[j];
                        if(a>b)
                            swap(a,b);
                        pairs x = make_pair(a,b);
                        st.insert(x);                        
                    }
                }
            }
        }
        return st.size();*/
    }
};

int main()
{
    Solution s1;
    vector<int> nums = {3,1,4,1,5};
    int k = 2;
    cout << s1.findPairs(nums,k);
}