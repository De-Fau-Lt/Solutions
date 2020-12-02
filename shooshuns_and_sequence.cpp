/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin >> n >> k;

	int arr[n];
	for(auto &x:arr)
		cin >> x;

	int l=arr[n-1];
	int i=n-1;
	int cnt=0;
	while(i>=0 && arr[i]==l)
		i--,cnt++;

	if(i<0)
		cout << 0;
	else	if(k <= n-cnt)
		cout << -1;
	else
		cout << n-cnt;
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
