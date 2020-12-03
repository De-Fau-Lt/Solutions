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

	int o=0,t=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		o+= (x == 100);
		t+= (x == 200);
	}
		
	if((o==0 && t&1) || (o&1) && t==0)
		cout << "NO";
	else if(((o==0) && !(t&1)) || (!(o&1) && t==0))
		cout << "YES";
	else if(abs(o-(t*2))&1)
		cout << "NO";
	else
		cout << "YES";
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
