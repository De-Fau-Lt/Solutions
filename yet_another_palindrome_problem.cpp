#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		int arr[n];
		string s;
		unordered_map<int,int> mp;
		for(auto &x:arr)
		{
			cin >> x;
			mp[x]++;
			s+=to_string(x);
		}
		int c=0;
		for(auto it=mp.begin();it!=mp.end();it++)
		{
			if(it->second >= 3)
			{
				cout << "YES\n";
				c=1;
				break;
			}
		}
		if(c==1)
			continue;

		string s2=s;
		reverse(s2.begin(),s2.end());
		if(s2==s)
			cout << "YES";
		
		else
		{
			unordered_set<int> st;
		
			int i=1;
			int f= 0;

			while(i<n)
			{
				if(arr[i] < arr[i-1])
				{
					if(st.count(arr[i])==1)
					{
						cout << "YES\n";
						f=1;
						break;
					}
				}
				st.insert(arr[i-1]);
				i++;
			}
			if(f==1)
				continue;
			i=1;
			st.clear();
			while(i<n)
			{
				if(arr[i] > arr[i-1])
				{
					if(st.count(arr[i])==1)
					{
						cout << "YES";
						f=1;
						break;
					}
				}
				st.insert(arr[i-1]);
				i++;
			}

			if(f==0)
				cout << "NO";
		}
		cout << "\n";
	}
}
