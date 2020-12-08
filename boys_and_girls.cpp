/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n=0,m=0;
	cin >> n >> m;

	char c = 'G';

	if(m > n)
		c = 'B';

	while(n > 0 && m > 0)
	{
		if(c == 'G' && n > 0)
			cout << 'B',c = 'B',n--;
		if(c == 'B' && m > 0)
			cout << 'G',c = 'G',m--;
	}
	while(n > 0)
		cout << 'B',n--;
	while(m > 0)
		cout << 'G',m--;
}

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

		#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	//freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout);
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
