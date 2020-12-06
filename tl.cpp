/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin >> n >> m;

	int rig[n];
	int wro[m];
	
	int w_s=999;
	for(int i=0;i<n;i++) cin >> rig[i];
	for(int i=0;i<m;i++) cin >> wro[i], w_s = min(w_s,wro[i]);

	sort(rig,rig+n);

	if(2*rig[0] > rig[n-1])
	{
		if(2*rig[0] < w_s)
		{
			cout << 2*rig[0];
			return;
		}
		cout << -1;
		return;
	}
	
	if(rig[n-1] >= w_s)
	{
		cout << -1;
		return;
	}

	cout << rig[n-1];
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
