/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;

	map<int,pair<int,int>> mp;

	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		int c=mp[x].second;
		mp[x]=make_pair(i,++c);
	}

	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second.second == 1)
		{
			cout << it->second.first+1;
			return;
		}
	}
	cout << -1;
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
	/*is Single Test case?*/cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
