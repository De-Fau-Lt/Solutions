/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &l, pair<int,int> &r)
{
	return l.second < r.second;
}

void solve()
{
	int n;
	cin >> n;
	
	vector<pair<int,int>> vec;

	for(int i=1;i<=n*2;i++)
	{
		int x;
		cin >> x;
		vec.push_back(make_pair(i,x));
	}
	sort(vec.begin(),vec.end(),comp);
	
	int prev=vec.begin()->second;
	int cnt=0;
	for(int i=0;i<vec.size();i++)
	{
		if(vec[i].second == prev)
			cnt++;
		if(vec[i].second != prev)
		{
			if(cnt&1)
			{
				cout << -1;
				return;
			}
			prev = vec[i].second;
			i--;
			cnt=0;
		}
	}

	for(int i=1;i<vec.size();i+=2)
	{
		if(vec[i].second == vec[i-1].second)
		{
			cout << vec[i].first << " " << vec[i-1].first << "\n";
		}
	}
}

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	//freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout);
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
