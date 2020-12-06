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

	for(auto &x:arr)
		cin >> x;

	sort(arr,arr+n);
	int sum=0;
	int s = arr[n-2];
	
	for(int i=0;i<n-2;i++)	sum+=s-arr[i];
	
	int l = arr[n-1] - sum;
	if(((arr[n-2]*(n-1)) + l) % n == 0)
		cout << n;
	else
		cout << n-1;
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
