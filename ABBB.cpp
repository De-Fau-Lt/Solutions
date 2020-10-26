#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
		
	int cnt=0;

	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A' || s[i]=='B' && cnt==0)
			cnt++;

		else if(s[i] == 'B')
			cnt--;
	}

	cout << cnt;
}

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

  		#ifndef ONLINE_JUDGE 
	/*freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout);*/
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
