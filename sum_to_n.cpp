#include <bits/stdc++.h>

using namespace std;
int dp[1001];
int sum_comb(int n)
{
	
	if(n==0 || n==1)
		return 1;
	if(n<0)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	return dp[n]= sum_comb(n-1)+sum_comb(n-3)+sum_comb(n-5);
}
int main(){
	int arr[]={1,3,5};
	int n;
	cin >> n;
	memset(dp,-1,sizeof(dp));
	cout << sum_comb(n) << endl;
}
