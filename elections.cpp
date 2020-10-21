#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	scanf("%d %d", &n,&m);

	int arr[n];
	memset(arr,0,sizeof(arr));
	int l_in=0;
	for(int i=0;i<m;i++)
	{
		int arr2[n];
		int x = -1;
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr2[j]);
			if(arr2[j] > x)
			{
				x = arr2[j];
				l_in = j;
			}
		}
		arr[l_in]++;
	}
	
	int x = -1;
	for(int i=0;i<n;i++)
	{
		if(arr[i] > x)
		{
			x = arr[i];
			l_in = i;
		}
	}
	printf("%d\n",l_in+1);
}
