#include <bits/stdc++.h>
#define M = 2e+9
using namespace std;

int check(int n)
{
	int x=0;
	while(n>0)
	{
		x+=n%10;
		n/=10;
	}
	return x;
}

int main(){
	int k;
	scanf("%d",&k);

	int dp;
	
	int i=1;
	int temp = 10;
	while(true)
	{
		temp += 9;
		if(check(temp)==10)
		{
			dp = temp;
			if(i==k)
				break;
			i++;
		}
	}
	printf("%d\n",dp);
}
