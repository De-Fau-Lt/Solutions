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

	vector<vector<int>> arr(4001,vector<int>(4001,0));

	for(int i=0;i<m;i++)
	{
		int a,b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
		
	unordered_map<int,int> mp;
	unordered_map<string,int> s;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int cnt=0;
			if(arr[i][j]==1)
			{
				mp[i]++;
				for(int k=1;k<=n;k++)
				{
					if(j!=k && arr[i][k]==1)
					{
						if(arr[j][k]==1)
						{
							int at[3] = {i,j,k};
							sort(at,at+3);
							string st = to_string(at[0]) + " " + to_string(at[1]) + " " + to_string(at[2]);
							if(s[st]==0)
								s[st]++;
						}
					}
				}
			}
		}
	}
	int sum=INT_MAX;
	if(s.empty())
	{
		cout << -1;
		return;
	}
	for(auto it=s.begin();it!=s.end();it++)
	{
		string z = it->first;
		//cout << z << "\n";
		int i=0;
		string z_t;
		int s_t=0;
		while(i<z.size())
		{
			if(z[i]!=' ')
				z_t+=z[i];

			if(z[i] == ' ' || i==z.size()-1)
				s_t += (mp[stoi(z_t)]-2),z_t.clear();
			i++;
		}
		sum = min(sum,s_t);
	}
	cout << sum;
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
