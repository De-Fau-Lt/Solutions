/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

/*int recur(vector<int> &arr,int i)
{
	if(i >= arr.size())
		return 0;

	return arr[i] + recur(arr,i+arr[i]);
}*/

void solve()
{
	int n;
	cin >> n;

	vector<int> arr(n+1);
	arr[0]=0;
	for(int i=1;i<n+1;i++)
		cin >> arr[i];
	
	int dp[n+1];
	dp[0]=0;
	for(int i=n;i>0;i--)
	{
		dp[i] = arr[i];
		int j = i+arr[i];

		if(j <= n)
			dp[i]+=dp[j];
	}

	cout << *max_element(dp+1,dp+n+1);
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
