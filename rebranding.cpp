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

	string s;
	cin >> s;

	int arr[26]={0};
	for(int i=0;i<26;i++) arr[i] = i+'a';
	for(int i=0;i<m;i++)
	{
		char x,y;
		cin >> x >> y;

		for(int j=0;j<26;j++)
		{
			if(arr[j] == x) arr[j] = y;
			else if(arr[j] == y) arr[j] = x;
		}
	}

	for(auto x:s)
		cout << char(arr[x-'a']);
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
