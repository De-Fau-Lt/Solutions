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
		bool in = false;
		int c=0;

		int arr[n];

		for(auto &x:arr)
			scanf("%d",&x);
		
		int j=n-1;
		while(arr[j]!=1)
			j--;
		
		for(int i=0;i<j;i++)
		{
			if(in)
			{
				if(arr[i]==0)
					c++;
			}
			if(arr[i]==1)
				in = true;
		}

		printf("%d\n",c);
	}
	return 0;
}
