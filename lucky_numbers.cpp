#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	
	ll t=0;
	while(n)
		t+=(1ll<<n--);

	printf("%lld\n",t);

	return 0;
}
