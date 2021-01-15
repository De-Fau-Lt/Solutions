/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,k;
	cin >> n >> k;
	int d = n-k;

	if(d<0 || (n > 1 && k==1))
	{
		cout << -1;
		return;
	}
	
	string s;
	for(int i=0;i<k;i++)
		s+=char(i+'a');
	
	s.erase(0,2);
	string t;
	for(int i=0;i<d;i++)
	{
		if(i&1) t+='b';
		else t+='a';
	}
	s = t+s;

	if(n==1)
		s='a'+s;
	else
		s="ab" + s;
	cout << s;
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
