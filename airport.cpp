/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m;
	cin >> n >> m;

	int arr[m];
	multiset<int,greater<int>> st;
	for(auto &x:arr)
	{
		cin >> x;
		st.insert(x);
	}



	int mi=0;
	int ma=0;
	int n2 =n;
	sort(arr,arr+m);
	int i=0;
	int s = arr[i];
	while(n--)
	{
		mi+=s;
		s-=1;
		if(s==0)
		{
			i++;
			s = arr[i];
		}
	}

	while(n2--)
	{
		auto it=st.begin();
		int s = *it;
		ma+=s;
		st.erase(st.begin());
		st.insert(s-1);
	}

	cout << ma << " " << mi;
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
