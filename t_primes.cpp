/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n;
	cin >> n;
	
	set<int> st;
	for(int i=2;i<=1000000;i++)
	{
		int f=0;
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(!f)
			st.insert(i);
	}

	for(int i=0;i<n;i++)
	{
		ll x;
		cin >> x;
		ll sq = sqrt(x);
		if(sq*sq == x)
		{
			if(st.count(sq) == 1)
				cout << "YES";
			else
				cout << "NO";
		}
		else
			cout << "NO";
		if(i!=n-1)
			cout << "\n";
	}
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
