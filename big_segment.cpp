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
	
	int arr[n][2];

	int mi_l = 2000000000;
	int ma_r = 0;

	for(int i=0;i<n;i++)
	{
		int l,r;
		cin >> l >> r;
		mi_l = min(mi_l,l);
		ma_r = max(ma_r,r);
		arr[i][0] = l;
		arr[i][1] = r;
	}

	for(int i=0;i<n;i++)
	{
		if(arr[i][0] <= mi_l && arr[i][1] >= ma_r)
		{	cout << i+1;
			return; }
	}

	cout << -1;
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
