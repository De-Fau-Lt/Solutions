#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	
	int c=0,x=0,y,e=0;;

	for(int i=0;i<n;i++)
	{
		scanf("%d",&y);

		e+=x-y;

		if(e<0)
		{
			c+=abs(e);
			e=0;
		}
		x=y;
	}
	printf("%d",c);
}
