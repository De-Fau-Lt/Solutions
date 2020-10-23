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
		
		int arr[n];
		int ma=0;
		for(auto &x:arr)
		{
			scanf("%d",&x);
			ma=max(ma,x);
		}

		int in = -2;

		for(int i=0;i<n;i++)
		{
			if(arr[i]==ma)
			{
				if(i > 0 && arr[i-1] !=ma)
					in = i;
				if(i < n-1 && arr[i+1]!=ma)
					in = i;
			}
		}

		printf("%d\n",in+1);

	}

	return 0;
}
