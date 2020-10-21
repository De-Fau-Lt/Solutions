#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	ll t = 0;
	ll c=0;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		t+=x;
		arr[i]=x-y;
		c+=arr[i];
	}

	sort(arr,arr+n,greater<int>());
	
	if(t-c > m)
		printf("%d\n",-1);
	else
	{
		int i=0;
		while(t>m)
			t-=arr[i++];
		printf("%d\n",i);
	}
	return 0;
}
