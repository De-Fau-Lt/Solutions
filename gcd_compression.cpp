#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		
		unordered_multimap<int,int> mp;
		unordered_multimap<int,int> mp2;

		for(int i=1;i<=n*2;i++)
		{
			int x;
			cin >> x;
			if(x&1)
				mp2.insert({x,i});
			else
				mp.insert({x,i});
		}

		if(mp.empty() || mp2.empty())
		{
			if(mp2.empty())
			{
				auto it=mp.begin();
				it=next(it,2);

				while(it!=mp.end())
				{
					cout << it->second << " ";
					it++;
					cout << it->second << endl;
					it++;
				}
			}
			else
			{
				auto it=mp2.begin();
				it=next(it,2);

				while(it!=mp2.end())
				{
					cout << it->second << " ";
					it++;
					cout << it->second << endl;
					it++;
				}
			}
		}
		else
		{
		
			if(mp2.size()&1 || mp.size()&1)
			{
				auto it=mp.begin();
				it++;
				while(it!=mp.end())
				{
					cout << it->second << " ";
					it++;
					cout << it->second << endl;
					it++;
				}
				it=mp2.begin();
				it++;
				while(it!=mp2.end())
				{
					cout << it->second << " ";
					it++;
					cout << it->second << endl;
					it++;
				}
			}
			else
			{
				auto it=mp.begin();
				it = next(it,2);
				while(it!=mp.end())
				{
					cout << it->second << " ";
					it++;
					cout << it->second << endl;
					it++;
				}
				it = mp2.begin();
				while(it!=mp2.end())
				{
					cout << it->second << " ";
					it++;
					cout << it->second << endl;
					it++;
				}
			}
		}
	}
}
