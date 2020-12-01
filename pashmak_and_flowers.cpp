/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*vector<vector<ll>> dp(200000+1,vector<ll>(2+1,-1));
ll bino_coff(ll n,ll k)
{
	if(dp[n][k] != -1)
		return dp[n][k];

	if(k == 0 || k == n)
	{
		dp[n][k]=1;
		return dp[n][k];
	}

	return dp[n][k] = bino_coff(n-1,k-1)+bino_coff(n-1,k);
}*/

void solve()
{
	ll n;
	cin >> n;
	
	int ma=0;
	int mi=2000000000;
	int arr[n];
	for(auto &x:arr)
	{
		cin >> x;
		ma=max(x,ma);
		mi = min(x,mi);
	}
	
	ll cnt=0,cnt2=0;

	for(auto x:arr)
	{
		cnt+=(x==ma);
		cnt2+=(x==mi);
	}
	
	cout << ma-mi << " ";
	if(ma==mi)
		cout << n*(n-1)/2;
	else
		cout << cnt*cnt2;

	/*sort(arr,arr+n);

	int diff = arr[n-1] - arr[0];
	
	int cnt=0;
	int i=0;
	int j=n-1;
	while(arr[i] == arr[0] && arr[j]==arr[n-1] && i<j)
		cnt++,i++,j--;
	
	cnt*=2;
	int x = 0;
	if(cnt>2)
	{
		x = bino_coff(cnt/2,2);
		x+=x;
	}
	
	for(int i=0;i<=200000;i++)
	{
		for(int j=0;j<=2;j++)
			dp[i][j] = -1;
	}
	
	cout << diff << " " << bino_coff(cnt,2) - x;*/
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
