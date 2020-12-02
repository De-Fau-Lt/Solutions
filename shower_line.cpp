/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int a[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			cin >> a[i][j];
	}
	int arr[]={0,1,2,3,4};

	int ma=0;

	do{
		int sum=a[arr[0]][arr[1]]+a[arr[1]][arr[0]] + a[arr[2]][arr[3]] + a[arr[3]][arr[2]] + a[arr[1]][arr[2]] + a[arr[2]][arr[1]] + a[arr[3]][arr[4]] + a[arr[4]][arr[3]] + a[arr[2]][arr[3]] + a[arr[3]][arr[2]] + a[arr[3]][arr[4]] + a[arr[4]][arr[3]];
		ma = max(sum,ma);

	}while(next_permutation(arr,arr+5));

	cout << ma;
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
