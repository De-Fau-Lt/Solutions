#include<bits/stdc++.h>
using namespace std;

bool com(string &s1, string &s2)
{
	return s1.size() < s2.size();
}

void solve()
{
	int n,k;
	cin >> n >> k;

	string arr[n];
	for(auto &x:arr)
		cin >> x;

	sort(arr,arr+n,com);

	string pass;
	cin >> pass;
	
	int i=0;
	int cnt =0;
	int ext =0;
	while(arr[i].size() != pass.size())
	{
		cnt ++;
		if(cnt == k)
			ext+=5,cnt=0;
		
		i++;
	}

	cout << i+1+ext << " ";

	while(arr[i].size() == pass.size() && i<n)
	{
		if(cnt == k)
			ext+=5,cnt=0;

		i++;
		cnt++;
	}

	cout << i+ext;
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
	///*is Single Test case?*/cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
