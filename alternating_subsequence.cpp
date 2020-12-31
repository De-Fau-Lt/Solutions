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
	int arr[n+1];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	arr[n]=0;
	
	int mp=INT_MIN,pp=0;
	int f=0;
	long long ans=0;
	for(auto x:arr)
	{
		if(x < 0)
		{
			mp = max(mp,x);
			if(f==1)	ans+=pp,pp=0;
			f=2;
		}
		else
		{
			pp = max(pp,x);
			if(f==2 || (f==2 && x==0)) ans+=mp,mp=INT_MIN;
			if(f == 1 && x==0) ans+=pp,pp=0;
			f=1;
		}
	}
	cout << ans;
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
