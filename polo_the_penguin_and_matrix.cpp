/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m,d;
	cin >> n >> m >> d;

	int arr[n*m];
	
	int prev;
	int f=0;
	cin >> prev;
	arr[0]=prev;
	for(int i=1;i<n*m;i++)
	{
		cin >> arr[i];
		if(abs(prev - arr[i])%d != 0) f=1;
		prev = arr[i];
	}

	if(f)
	{
		cout << -1;
		return;
	}

	sort(arr,arr+(n*m));

	int mi = (0+((n*m)-1))/2;
	
	int c=0;
	for(int i=0;i<n*m;i++)
	{
		if(arr[mi]!=arr[i])
			c += abs(arr[mi] - arr[i])/d;
	}
	cout << c;
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
