#include <bits/stdc++.h>

using namespace std;

int dp[1001];

class Solution{
public:
    bool divisorGame(int N){
        //iterative dp
        if(N==1)
            return false;
        for(int i=1;i<=N;i++)
        {
            if(i==1)
                dp[i]=0;
            else
            {
                for(int j=1;j*j<=i;j++)
                {
                    if(i%j==0)
                    {
                        if(dp[i-j]==0)
                        {
                            dp[i]=1;
                            break;
                        }
                        if(j!=1 && dp[i-(i/j)]==0)
                        {
                            dp[i]=1;
                            break;
                        }
                    }
                }
                if(dp[i]!=1)
                    dp[i]=0;
            }
        }
        if(dp[N]==1)
            return true;
        return false;
        //recursive dp
        /*if(N==1)
            return false;
        
        if(dp[N]!=-1)
            return dp[N]==1;

        for(int i=1;i*i<=N;i++)
        {
            if(N%i==0)
                if(divisorGame(N-i)==0)
                {
                    dp[N]=1;
                    return true;
                }
                if(i!=1 && divisorGame(N-(N/i))==0)
                {
                    dp[N]==1;
                    return true;
                }
        }
        dp[N] = 0;
        return false;*/
    }
};

int main()
{
    memset(dp,-1,sizeof(dp));
    int N;
    cin >> N;
    Solution s1;
    cout << s1.divisorGame(N);
}