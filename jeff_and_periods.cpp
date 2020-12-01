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
	
	unordered_map<int,pair<int,int>> mp;
	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		mp[arr[i]] = make_pair(0,0);
	}
	
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		pair<int,int> x = mp[arr[i]];
		//cout << x.first << " " << x.second << endl; 
		if(x.second != -1)
		{
			if(x.second == 0)
			{
				if(x.first == 0)
				{
					mp[arr[i]] = make_pair(i+1,0);
				}
				else
				{
					int d = i+1 - x.first;
					mp[arr[i]] = make_pair(i+1,d);
				}
			}
			else
			{
				int d = i+1 - x.first;
				if(d != x.second)
					mp[arr[i]] = make_pair(i+1,-1), cnt++;
				else
					mp[arr[i]] = make_pair(i+1,d);
			}
		}
	}

	cout << mp.size()-cnt << "\n";

	sort(arr,arr+n);
	for(auto x:arr)
	{
		if(mp[x].second != -1)
		{
			cout << x << " " << mp[x].second << "\n";
			mp[x] = make_pair(mp[x].first,-1);
		}
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
