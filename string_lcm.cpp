/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b <= 0)
		return a;

	return gcd(b,a%b);
}

void solve()
{
	string s,t;
	cin >> s >> t;

	int a=s.size(),b=t.size();

	if(b>a) swap(a,b),swap(s,t);
	
	string st;
	if(a%b == 0)
	{
		int d=a/b;
		for(int i=0;i<d;i++)
			st+=t;

		if(st==s)
		{
			cout << st;
			return;
		}
	}

	int g = gcd(a,b);
	int lcd = (a/g)*b;

	while(st.size()<lcd)
		st+=t;
	string s1,s2;
	while(s1.size()<lcd)
		s1+=s;
	
	if(st==s1)
	{
		cout << st;
		return;
	}

	cout << -1;
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
		solve(); 
		cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
