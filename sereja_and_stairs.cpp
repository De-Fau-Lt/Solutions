/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int m;
	cin >> m;
	
	map<int,int,greater<int>> mp;
	for(int i=0;i<m;i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}

	auto it=mp.begin();

	vector<int> res;
	res.push_back(it->first);
	it++;
	while(it!=mp.end())
	{
		if(it->second > 1)
		{
			res.insert(res.begin(),it->first);
			res.push_back(it->first);
		}
		else
			res.insert(res.begin(),it->first);
		it++;
	}
	cout << res.size() << "\n";

	for(auto x:res)
		cout << x << " ";
}

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

		#ifndef ONLINE_JUDGE 
	//freopen("input.txt", "r", stdin); 
	//freopen("error.txt", "w", stderr); 
	//freopen("output.txt", "w", stdout);
  	#endif

	int t=1; 
	//*is Single Test case?*/cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
