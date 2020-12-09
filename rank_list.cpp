/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &l, pair<int,int> &r)
{
	if(l.first == r.first)
		return l.second < r.second;
	return l.first > r.first;
}

void solve()
{
	int n,k;
	cin >> n >> k;

	vector<pair<int,int>> vec;

	for(int i=0;i<n;i++)
	{
		int p,t;
		cin >> p >> t;

		vec.push_back(make_pair(p,t));
	}

	sort(vec.begin(),vec.end(),comp);
	
	int cnt=0;
	for(auto x:vec)
		cnt+=(x.first == vec[k-1].first && x.second == vec[k-1].second);

	cout << cnt;
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
