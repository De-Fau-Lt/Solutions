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

	vector<pair<int,int>> vec;

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		vec.push_back(make_pair(x,y));
	}
	

	int cnt=0;
	for(int i=0;i<n;i++)
	{
		bool u=false,d=false,l=false,r=false;
		
		for(int j=0;j<n;j++)
		{
			if(vec[i].first > vec[j].first && vec[i].second == vec[j].second)
				r=true;
			if(vec[i].first < vec[j].first && vec[i].second == vec[j].second)
				l=true;
			if(vec[i].first == vec[j].first && vec[i].second > vec[j].second)
				d=true;
			if(vec[i].first == vec[j].first && vec[i].second < vec[j].second)
				u=true;
		}
		if(r&&l&&d&&u)
			cnt++;
	}

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
