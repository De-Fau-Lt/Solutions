/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int w,h,n;
	cin >> w >> h >> n;
	
	long long cnt=1;
	while(h%2==0)
	{
		h/=2;
		cnt*=2;
	}
	
	while(w%2==0)
	{
		w/=2;
		cnt*=2;
	}

	if(cnt >= n)
		cout << "YES";
	else
		cout << "NO";
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
