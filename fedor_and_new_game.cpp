#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);

	int arr[m+1];
	for(int &x:arr)
		scanf("%d",&x);
	
	int s=0;
	for(int i=0;i<m;i++)
	{
		int p = arr[m] ^ arr[i];
		/*int b=0;
		for(int j=log2(p);j>=0;j--)
		{	
			if(p&1<<j)
				b++;
		}*/
		if(__builtin_popcount(p) <= k)
		//if(b <= k)
			s++;
	}
	printf("%d\n",s);
}
