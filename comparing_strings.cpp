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
	cin >> s >> s2;
	
	string t1=s,t2=s2;
	sort(s.begin(),s.end());
	sort(s2.begin(),s2.end());

	if(s==s2)
	{
		int cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if(t1[i] != t2[i])
				cnt++;
		}
		if(cnt > 2)
			cout << "NO";
		else
			cout << "YES";
	}
	else
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
