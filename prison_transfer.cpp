#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,t,c;
	scanf("%d %d %d",&n,&t,&c);

	int arr[n+1];

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}

	arr[n] = 10e8+1;

	int r=0;

	int cnt=0;
	for(int i=0;i<n+1;i++)
	{
		if(arr[i] <= t)
			cnt++;

		if(arr[i] > t)
		{
			if(cnt >= c)
			{
				r += 1+cnt-c;
			}
			cnt=0;
		}
	}

		printf("%d\n",r);
		return 0;
}
