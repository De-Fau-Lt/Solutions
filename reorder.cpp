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
		
		int sum=0;

		for(int i=0;i<n;i++)
		{
				int x;
				scanf("%d",&x);

				sum+=x;
		}

		if(sum == m)
			printf("YES");
		else
			printf("NO");

		cout << endl;
	}

	return 0;
}
