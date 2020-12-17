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

	char arr[n];

	for(auto &x:arr)
		cin >> x;

	int cnt=0;
	int t=0;
	int t2=0;
	int r=0;
	for(auto x:arr)
	{
		if(!r)
			t+=(x=='.');
		if(x == 'L') t=0,r=0,cnt+=(t2&1),t2=0;
		if(r) t2++;
		if(x == 'R') cnt+=t,t=0,r=1;
	}
	cout << cnt+t;
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
