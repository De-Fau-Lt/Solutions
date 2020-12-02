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

	map<int,int> mp;
	string s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	
	if(mp[5]>0 || mp[7] > 0 || mp[1]==0)
	{
		cout << -1;
		return;
	}

	if(mp[4] > 0)
	{
		mp[2]-=mp[4];
		mp[1]-=mp[4];
		for(int i=0;i<mp[4];i++)
			s+="124";
		mp[4] = 0;
	}
	if(mp[6] > 0 && mp[2] > 0)
	{
		mp[6]-=mp[2];
		mp[1]-=mp[2];
		for(int i=0;i<mp[2];i++)
			s+="126";
		mp[2]=0;
	}
	if(mp[6] > 0 && mp[3] > 0)
	{
		mp[6]-=mp[3];
		mp[1]-=mp[3];
		for(int i=0;i<mp[3];i++)
			s+="136";
		mp[3]=0;
	}

	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second != 0)
		{
			cout << -1;
			return;
		}
	}
	
	for(int i=0;i<s.size();i++)
	{
		cout << s[i] << " ";
		if(i == 2)
			cout << "\n";
	}
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
