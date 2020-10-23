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

		printf("%d\n",2);
		
		printf("%d %d\n",n-1,n);
		int x = ceil(double(n+(n-1))/double(2));
		
		for(int i=n-2;i>0;i--)
		{
			printf("%d %d\n",i,x);
			x = ceil(double((i+x))/double(2));
		}
	}
	return 0;
}
