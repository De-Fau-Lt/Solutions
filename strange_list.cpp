/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,x;
	cin >> n >> x;
	
	long long sum=0;
	vector<pair<long long,long long>> arr;
	for(int i=0;i<n;i++)
	{
		int a;
		cin >> a;
		arr.push_back(make_pair(1,a));	
	}
	
	int f=0;
	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i].second*arr[i].first;
		//cout << arr.front().first << " " << arr.front().second << "\n";
		if(arr[i].second%x == 0 && !f)
			arr.push_back(make_pair(x*arr[i].first,arr[i].second/x));
		else f=1;
	}
	//cout << arr.front().first << " " << arr.front().second;
	cout << sum;
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
