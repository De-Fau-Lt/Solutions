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

	
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}

	if(n&1)
		n++;
	int l=n/2;

	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second > l)
		{
			cout << "NO";
			return;	
		}
	}

	cout << "YES";
	/*int arr[n];

	for(auto &x:arr)	cin >> x;
	sort(arr,arr+n);
	
	do{
		int f=0;
		for(int i=1;i<n;i++)
		{
			if(arr[i] == arr[i-1])	f=1;
		}
		if(!f)
		{
			cout << "YES";
			return;	
		}
	}while(next_permutation(arr,arr+n));

	cout << "NO";*/
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
