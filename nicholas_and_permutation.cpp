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
	int mi = INT_MAX;
	int ma=0;
	int ma_in=0,mi_in=0;

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i] > ma)
		{
			ma = arr[i];
			ma_in = i;
		}
		if(arr[i] < mi)
		{
			mi = arr[i];
			mi_in = i;
		}
	}
	
	ma_in++,mi_in++;
	if(ma_in > mi_in)
		swap(ma_in,mi_in);

	cout << max(abs(ma_in - n),abs(mi_in - 1));
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
