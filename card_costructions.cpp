#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n==1)
			cout << 0;
		else
		{
			multiset<int> mp = {1,2,7};
		
			auto it=mp.begin();
			it = next(it,2);
			int r=5;
			int i=3;
			while(*it < n)
			{
				r+=3;
				mp.insert(*it+r);
				it++;
				i++;
			}
		
			int d=0;
			while(n>1)
			{
				it=mp.lower_bound(n);
				if(it!=mp.end())
				{
					if(*it!=n)
					{
						it--;
						n-=(*it);
						d++;
					}
					else{
						n-=(*it);
						d++;
					}

				}	
				else
				{
					it--;
					n-=(*it);
					d++;
				}
			}
			printf("%d",d);
		}
		cout << "\n";
	}
}
