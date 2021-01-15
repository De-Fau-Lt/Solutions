/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin >> n >> k;
	int l = n*n+1;
	int d = n-k;
	int sum=0;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		l-=d+1;
		arr[i]=l;
		sum+=l;
	}
	
	cout << sum << "\n";

	int s = 1;
	for(int i=0;i<n;i++)
	{
		int p=0;
		for(int j=0;j<n;j++)
		{
			if(j >= k-1)
				cout << arr[i]+(p++) << " ";
			else
				cout << s++ << " ";
		}
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
