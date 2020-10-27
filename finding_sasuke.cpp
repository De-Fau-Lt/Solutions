#include<bits/stdc++.h>
using namespace std;

void solve()
{
		int n;
		cin >> n;

		int arr[n];
		for(auto &x:arr)
			cin >> x;
	
		int m=n/2;
		for(int i=n-1;i>=0;i--)
		{
			if(i<m)
				cout << -arr[i] << " ";
			else
				cout << arr[i] << " ";
		}
}

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	#ifndef ONLINE_JUDGE 
	/*freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout);*/
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
