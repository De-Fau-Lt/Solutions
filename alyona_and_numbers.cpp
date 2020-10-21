#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;

	scanf("%d %d",&n,&m);
	
	int c[6] ={};
	long long cnt=0;

	for(int i=1;i<=n;i++)
		c[(i%5 == 0?5:i%5)]++;

	for(int i=1;i<=m;i++)
		cnt+=c[5 - (i%5)];

	printf("%lld\n",cnt);
}
