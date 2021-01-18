/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,d;
	cin >> n >> d;

	int arr[n];
	
	int cnt=0;
	for(auto &x:arr) cin >> x ,cnt+=(x>d);

	if(!cnt)
	{
		cout << "YES";
		return;
	}
	sort(arr,arr+n);
	if(arr[0]+arr[1] <= d) cout << "YES";
	else cout << "NO";
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
