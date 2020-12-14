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
	int c=0;
	for(auto &x:arr)
		cin >> x,c+=(x==1);

	for(int i=0;i<n;i++)
	{
		if(arr[i] == 1)
			arr[i] = -1;
		else
			arr[i] = 1;
	}

	int s=INT_MIN;
	int curr=0;
	for(int i=0;i<n;i++)
	{
		curr = max(arr[i],curr+arr[i]);
		s = max(curr,s);
	}
	
	cout << s+c;
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
