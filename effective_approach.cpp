#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	unordered_map<int,int> mp;
	unordered_map<int,int> mp2;

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		mp[arr[i]]=i+1;
	}
	
	int j=1;
	for(int i=n-1;i>=0;i--)
		mp2[arr[i]]=j++;

	int m;
	cin >> m;
	
	ll v=0,p=0;

	for(int i=0;i<m;i++)
	{
		int x;
		cin >> x;
		v+=mp[x];
		p+=mp2[x];
	}

	cout << v << " " << p << endl;
	return 0;
}

	
