/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	char arr[4][4];

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			cin >> arr[i][j];
	}

	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			int cnt=0;
			int cnt2=0;

			cnt+=(arr[i][j]=='.');
			cnt+=(arr[i][j-1]=='.');
			cnt+=(arr[i-1][j]=='.');
			cnt+=(arr[i-1][j-1]=='.');
			cnt2+=(arr[i][j] == '#');
			cnt2+=(arr[i][j-1]=='#');
			cnt2+=(arr[i-1][j]=='#');
			cnt2+=(arr[i-1][j-1]=='#');

			if(cnt <= 1 || cnt2 <= 1)
			{
				cout << "YES";
				return;
			}
		}
	}

	cout << "NO";
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
