#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int n,c0,c1,h;
		scanf("%d %d %d %d",&n,&c0,&c1,&h);

		string s;
		cin >> s;

		int o=0,z=0;

		for(auto x:s)
			if(x=='1')
				o++;
			else
				z++;
		
		int ans = (c0*z)+(c1*o);
		int z_o=(s.size()*c0) + (h*o);
		ans = min(ans,z_o);
		z_o = (s.size()*c1) + (h*z);
		ans = min(ans,z_o);
		
		printf("%d\n",ans);
	}
	return 0;
}
