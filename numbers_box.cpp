#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,m;

		scanf("%d %d",&n,&m);
		
		int mi=101;
		int sum=0;
		int cnt=0;
		int f=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int x;
				scanf("%d", &x);
				mi = min(abs(x),mi);
				if(x==0)
					f=1;
				if(x <0)
					cnt++;
				sum+=abs(x);
			}
		}
		if(cnt&1 && !f)
			sum -= (mi*2);

		cout << sum << "\n";
	}
	return 0;
}
