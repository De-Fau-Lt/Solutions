#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        //stack
        stack<int> stk;
        
        int l = nums.size(),h=0;
        for(int i=0;i<nums.size();i++)
        {
            while(!stk.empty() && nums[stk.top()] > nums[i])
            {
                l=min(l,stk.top());
                stk.pop();
            }
            stk.push(i);
        }
        
        stk.clear();
        
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!stk.empty() && nums[stk.top()] < nums[i])
            {
                h = max(h,stk.top());
                stk.pop();
            }
            stk.push(i);
        }
        return h-l > 0? h-l+1:0;
        
        //sorting
        /*vector<int> nums2 = nums;
        
        sort(nums2.begin(),nums2.end());
        
        int mi=INT_MAX;
        int ma=0;
        
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]!=nums2[i])
            {
                mi = min(i,mi);
                ma = max(i,ma);
            }   
        }
        
        if(ma-mi < 0)
            return 0;
        return ma-mi+1;*/

        //bruteforce
        /*int i=0;
        int mi=INT_MAX;
        int ma=0;
        while(i<nums.size()-1)
        {
            int j=i+1;
            while(j<nums.size())
            {
                if(nums[j] < nums[i])
                {
                    mi = min(mi,i-1);
                    ma = max(ma,j);
                }
                j++;
            }
            i++;
        }
        if(ma==0 && mi==INT_MAX)
            return 0;
        return ma-mi;*/
    }
};

int main()
{

}