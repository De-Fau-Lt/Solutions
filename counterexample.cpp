#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll l,r;
	scanf("%lld %lld",&l,&r);

	while(l&1)
		l++;

	if(l+2 > r)
	{
		printf("%d\n", -1);
		return 0;
	}

	printf("%lld %lld %lld\n",l,l+1,l+2);
}
