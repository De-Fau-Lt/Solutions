#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pairs;

int main()
{
    string n;
    cin >> n;

    int m;
    scanf("%d",&m);

    int dp[n.size()];
    memset(dp,0,sizeof(dp));
    int c=0;
    for(int i=1;i<n.size()-0;i++)
    {
        if(n[i]==n[i-1])
            c++;
        dp[i]=c;
    }

    for(int i=0;i<m;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);

        printf("%d\n",dp[r-1]-dp[l-1]);
    }
        
}