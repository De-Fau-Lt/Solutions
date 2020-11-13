#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	scanf("%d",&t);

	while(t--)
	{
		int n;
		scanf("%d",&n);
		
		int prev = 4*n;
		vector<int> vec;
		vec.push_back(prev);
		cout << prev << " ";
		while(vec.size()!=n)
		{
			int f=0;
			for(int i=0;i<vec.size();i++)
			{
				if((prev-2)%vec[i] == 0)
				{
					prev-=2;
					f=1;
					break;
				}
			}
			if(!f)
				vec.push_back(prev-2),cout << prev-2 << " ";
		}
		cout << "\n";
	}
	return 0;
}
