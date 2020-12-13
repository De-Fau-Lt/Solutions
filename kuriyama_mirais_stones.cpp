/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
	int n;
	cin >> n;

	ll arr[n+1]={0};
	ll arr2[n+1]={0};
	
	ll r=0;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin >> x;
		arr2[i]=x;
		r+=x;
		arr[i]=r;
	}

	sort(arr2,arr2+(n+1));

	r=0;
	for(int i=1;i<=n;i++)
	{
		r+=arr2[i];
		arr2[i]=r;
	}

	int m;
	cin >> m;

	for(int i=0;i<m;i++)
	{
		int t,l,r;
		cin >> t >> l >> r;
		if(t==1)
			cout << arr[r]-arr[l-1];
		else
			cout << arr2[r]-arr2[l-1];

		if(i!=m-1)
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
