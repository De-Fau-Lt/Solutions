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
	int a,b,c,d;
	cin >> a >> b >> c >> d;
		
	int ans=0;
	for(int x=1;x<=n;x++)
	{
		int y = x+b-c;
		int z = x+a-d;
		int w = y+a-d;

		if(y>=1 && y <= n && z>=1 && z<=n && w>=1 && w<=n)
			ans++;
	}

	cout << (long long)ans*n;
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
