/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int> dp;

/*void sub_s(string s,string t,int i)
{
	if(i==s.size())
	{
		if(!t.empty())
			dp[t]++;
		return;
	}

	sub_s(s,t,i+1);
	t+=s[i];
	sub_s(s,t,i+1);
}*/

void solve()
{
	int n,q;
	cin >> n >> q;

	string s;
	cin >> s;

	//sub_s(s,"",0);
	
	while(q--)
	{
		bool bad = true;
		int l,r;
		cin >> l >> r;
		--l,--r;

		for(int i=0;i<l;i++)
			if(s[i] ==  s[l]) bad=false;
		for(int i=r+1;i<n;i++)
			if(s[i]==s[r]) bad = false;

		cout << (bad?"NO":"YES");
		/*string t = s.substr(l-1,r-l+1);
		if(dp[t] > 1)
			cout << "YES";
		else
			cout << "NO";*/
		cout << "\n";
	}
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
	/*is Single Test case?*/cin>>t; 
	while(t--) 
	{
		dp.clear();
		solve(); 
		//cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
