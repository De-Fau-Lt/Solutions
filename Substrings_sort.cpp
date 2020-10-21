#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);

	multimap<int,string> mp;
	for(int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		mp.insert({s.size(),s});
	}

	auto it=mp.begin();
	it++;
	auto st=it;
	it--;

	while(st!=mp.end())
	{
		string s = st->second;
		if(s.find(it->second) == string::npos)
		{
			printf("NO\n");
			return 0;
		}
		st++;
		it++;
	}
	
	printf("YES\n");
	it=mp.begin();

	while(it!=mp.end())
	{
		cout << it->second << "\n";
		it++;
	}

}

