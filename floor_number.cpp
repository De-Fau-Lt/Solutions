#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n,x;
		scanf("%d %d",&n,&x);
		
		int i=0;
		int r1=1,r2=2;
		while(true)
		{
			if(n>=r1 && n<=r2)
				break;
			
			r1 = i*x+3;
			r2 = (i+1)*x+2;

			i++;
		}

		printf("%d\n",i+1);
	}
}
