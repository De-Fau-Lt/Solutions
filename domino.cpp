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
	
	int u=0,l=0,c=0;

	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		u+=x;
		l+=y;
		c+=(x&1 ^ y&1);
	}
	
	if(!(u&1) && !(l&1)) cout << 0;
	else if(u&1 && l&1 && c) cout << 1;
	else cout << -1;
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
