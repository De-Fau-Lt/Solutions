/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

/*int recurr(int x,int y,int n)
{
	if(n == 2)
		return y;
	if(n == 1)
		return x;

	return recurr(x,y,n-1) - recurr(x,y,n-2);
}*/

void solve()
{
	int m = 1e9+7;
	ll x,y;
	cin >> x >> y;

	int n;
	cin >> n;
	
	ll c=0;
	if(n == 1)
		c=x;
	if(n==2)
		c=y;
	
	vector<int> vec;
	vec.push_back(x);
	vec.push_back(y);
	for(int i=2;i<n;i++)
	{
		c = y-x;
		x=y;
		y=c;
		vec.push_back(c);
		if(vec[0]==vec[i-1] && vec[1] == vec[i])
		{
			vec.pop_back();
			vec.pop_back();
			break;
		}
	}
	
	/*cout << "\n";
	for(auto x:vec)
		cout << x << " ";
	cout << "\n";*/
	
	c = n%vec.size();
	if(c==0) c=vec.size();
	c--;
	cout << ((vec[c] % m)+m)%m;
	//cout << recurr(x,y,n);
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
