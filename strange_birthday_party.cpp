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

	int arr[n];
	int arr2[m];

	for(auto &x:arr) cin >> x;
	for(auto &x:arr2) cin >> x;

	sort(arr,arr+n,greater<int>());
	
	long long sum=0;
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr2[j] < arr2[arr[i]-1])
			sum+=arr2[j],j++;
		else
			sum+=arr2[arr[i]-1];
	}
	cout << sum;
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
