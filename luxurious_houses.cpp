#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);

	int arr[n];
	map<int,int,greater<int>> mp;

	for(auto &x:arr)
	{
		scanf("%d",&x);
		mp[x]++;
	}
	
	auto it=mp.begin();

	for(auto x:arr)
	{
		if(it->second == 0)
		{
			while(it->second == 0)
				it++;
		}

		if(x < it->first)
		{
			printf("%d ",it->first - x+1);
			mp[x]--;
		}
		else if(x == it->first)
		{
			if(it->second > 1)
				printf("%d ",1);

			else
				printf("%d ",0);
			mp[x]--;
		}
	}

	cout << "\n";
	return 0;
}
