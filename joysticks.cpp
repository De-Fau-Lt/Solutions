/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b;
	cin >> a >> b;
	int cnt=0;
	
	if(a == 1 && b == 1)
	{
		cout << 0;
		return;
	}
	while(a > 0 && b > 0)
	{
		if(a > b)
			a-=2,b+=1;
		else
			b-=2,a+=1;
		cnt++;
	}
	cout << cnt;
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
