/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> dp(4001,-2);
int recurr(int n,int a,int b,int c)
{
	if(n == 0)
		return 0;
	
	if(n < 0)
		return -1;
	
	if(dp[n] != -2)
		return dp[n];

	dp[n] = max(recurr(n-a,a,b,c),max(recurr(n-b,a,b,c),recurr(n-c,a,b,c)));
	if(dp[n] > -1) return dp[n]+=1;
	return dp[n];
}
void solve()
{
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	
	cout << recurr(n,a,b,c);
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
