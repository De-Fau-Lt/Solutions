#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int k,n;
		scanf("%d %d",&n,&k);

		int arr[n];

		for(auto &x:arr)
			scanf("%d",&x);

		sort(arr,arr+n);

		int i=n-2;
		int j=n-1;
		ll sum=0;
		int c=0;
		while(i>=0 && c<k)
		{
			sum+=arr[i];
			arr[i--]=0;
			c++;
		}

		sum+=arr[j];
		printf("%lld\n",sum - arr[n-2]);
	}
}
