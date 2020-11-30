/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin >> n >> m;
	
	vector<pair<int,int>> vec;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		vec.push_back(make_pair(x,i+1));
	}
	
	int in=0;
	while(!vec.empty())
	{
		in = vec[vec.size()-1].second;
		auto it=vec.begin();

		if(it->first <= m)
			vec.erase(it);
		else
		{
			vec.push_back(make_pair(it->first - m,it->second));
			vec.erase(vec.begin());	
		}
	}
	cout << in;
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
