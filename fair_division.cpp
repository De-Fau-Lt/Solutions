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

	int arr[n];
	int sum=0;
	int o=0;
	for(auto &x:arr)
		cin >> x,sum+=x,o+=(x==1);

	if(sum&1)
	{
		cout << "NO";
		return;
	}

	if(o>0)
		cout << "YES";
	else
	{
		if(n&1)
			cout << "NO";
		else
			cout << "YES";
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
	/*is Single Test case?*/cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
