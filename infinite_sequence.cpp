#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);

	if(c==0)
	{
		if(a==b)
			printf("YES");
		else
			printf("NO");

		return 0;
	}
	
	int n=floor((b-a)/c);
	if(n<0)
		n*=-1;

	if(double((b-a))/double(c) == n)
		printf("YES");
	else
		printf("NO");

}


