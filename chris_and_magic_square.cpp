/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool check(unordered_map<ll,ll> mp,ll prev)
{
	auto t = mp.begin();
	auto t2 = t++;
	if(t->first < t2->first)
	{
		if(t->second > 1 || (t2->first != prev && prev != -1))
			return false;
	}
	else if(t->first > t2->first)
	{
		if(t2->second > 1 || (t->first != prev && prev != -1))
			return false;
	}

	return true;
}

void solve()
{
	int n;
	cin >> n;

	ll arr[n][n];
	unordered_map<ll,ll> mp;
	for(int i=0;i<n;i++)
	{
		ll r=0;
		for(int j=0;j<n;j++)
			cin >> arr[i][j],r+=arr[i][j];
		mp[r]++;
	}

	if(n==1)
	{
		cout << 1;
		return;
	}
	
	if(mp.size()!=2)
	{
		cout << -1;
		return;
	}

	ll cr = -1;
	ll mr = 2000000000000000000;
	auto it=mp.begin();
	auto st = it++;
	
	if(!(check(mp,-1)))
	{
		cout << -1;
		return;
	}
	
	cr = max(it->first,st->first);
	mr = min(it->first, st->first);
	
	ll diff = cr - mr;

	ll cc=-1;
	ll mc= 2000000000000000000;
	mp.clear();
	for(int i=0;i<n;i++)
	{
		ll c=0;
		for(int j=0;j<n;j++)
			c+=arr[j][i];
		mp[c]++;
		//cout << c << "\n";
	}

//	for(auto t=mp.begin();t!=mp.end();t++)
	//	cout << t->first << " " << t->second << "\n";

	if(mp.size()!=2)
	{
		cout << -1;
		return;
	}

	it = mp.begin();
	st = it++;

	if(!(check(mp,cr)))
	{
		cout << -1;
		return;
	}

	cc = max(it->first,st->first);
	mc = min(it->first,st->first);
	
	if(mc+diff != cc || cc!=cr)
	{
		cout << -1;
		return;
	}
	
	bool z=false;
	int i=0,j=0;
	int i2=0,j2=n-1;
	ll d1=0,d2=0;
	while(i<n)
	{
		if(arr[i][j] == 0 || arr[i2][j2] == 0) z=true;
		d1+=arr[i++][j++];
		d2+=arr[i2++][j2--];
	}
	
	//cout << d1 << " " << d1 << " " << cc <<"\n";
	if(d1 == d2 && d2 == cc)
	{
		cout << diff;
		return;
	}

	if(d1 == d2 && d2!=cc)
	{
		if(z && d1+diff == cc && d2+diff == cc)
		{
			cout << diff;
			return;
		}
		else
		{
			cout << -1;
			return;
		}
	}
	
	if(d1!=d2)
	{
		ll mi_d=2000000000000000000;
		mi_d = min(d1,d2);
		ll ma_d = 0;
		ma_d = max(d1,d2);
		if(ma_d != cc || mi_d + diff != cc)
		{
			cout << -1;
			return;
		}
		if(ma_d == cc && mi_d+diff ==cc && !z)
		{
			cout << -1;
			return;
		}
	}
	cout << diff;
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
