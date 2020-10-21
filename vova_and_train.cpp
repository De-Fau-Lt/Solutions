#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int L,v,l,r;
		scanf("%d %d %d %d",&L,&v,&l,&r);

		int d = L/v;

		if(double(l)/double(v) == floor(double(l)/double(v)))
			printf("%d\n",d - ((r/v)-(l/v))-1);
		else
			printf("%d\n",d-((r/v)-(l/v)));
	}

	return 0;
}
