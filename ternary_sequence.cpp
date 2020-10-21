#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int x1,y1,z1;
		scanf("%d %d %d",&x1,&y1,&z1);

		int x2,y2,z2;
		scanf("%d %d %d",&x2,&y2,&z2);


		int sum=0;

		if(z1<=y2)
		{
			sum=2*z1;
			y2-=z1;
			z1=0;
		}
		else if(z1>y2)
		{
			sum=2*y2;
			z1-=y2;
			y2 = 0;
		}
		
		if(z2 > z1)
		{
			z2-=z1;
			z1=0;

			if(z2 > x1)
			{
				z2-=x1;
				x1=0;
			}
			else
				z2=0;
		}
		else
			z2 =0;

		printf("%d\n",sum+(-2*z2));


	}
}
