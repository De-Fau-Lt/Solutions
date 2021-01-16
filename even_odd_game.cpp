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

	int arr[n];
	for(auto &x:arr)
		cin >> x;

	sort(arr,arr+n,greater<int>());

	long long cnt=0;
	for(int i=0;i<n;i++)
	{
		if(!(i&1))
		{
			if(!(arr[i]&1))
				cnt+=arr[i];	
		}
		else
		{
			if(arr[i]&1)
				cnt-=arr[i];
		}
	}

	if(cnt==0) cout << "Tie";
	else if(cnt > 0) cout << "Alice";
	else cout << "Bob";
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
