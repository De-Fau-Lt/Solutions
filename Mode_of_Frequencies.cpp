#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        unordered_map<int,int> mp;
        unordered_map<int,int> mp2;

        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            mp[x]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++)
            mp2[it->second]++;
        
        int ma=0;
        int v=0;
        for(auto it=mp2.begin();it!=mp2.end();it++)
        {
            if(it->second > ma)
            {
                ma = it->second;
                v = it->first;
            }
            else if(it->second == ma)
            {
                if(it->first < v)
                    ma = it->second;
                    v = it->first;
            }
        }
        printf("%d\n",v);
    }
}