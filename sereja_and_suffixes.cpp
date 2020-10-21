#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	int arr[n];
	for(auto &x:arr)
		scanf("%d",&x);

	int dp[n+2];
	memset(dp,0,sizeof(dp));

	unordered_map<int,int> mp;
	for(int i=n-1;i>=0;i--)
	{
		if(mp[arr[i]] == 1)
			dp[i+1] = dp[i+2];
		else
		{
			dp[i+1]=dp[i+2]+1;
			mp[arr[i]]++;
		}
	}

	for(int i=0;i<m;i++)
	{
		int x;
		scanf("%d",&x);

		printf("%d\n",dp[x]);
	}
}
