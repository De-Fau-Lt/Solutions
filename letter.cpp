/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s,s2;
	getline(cin,s);
	getline(cin,s2);

	for(int i=0;i<s2.size();i++)
	{
		if(s2[i]!=' ')
		{
			auto it=find(s.begin(),s.end(),s2[i]);
			if(it == s.end())
			{
				cout << "NO";
				return;	
			}
			s.erase(it);
		}
	}
	cout << "YES";
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
