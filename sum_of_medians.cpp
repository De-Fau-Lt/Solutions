#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,k;
		cin >> n >> k;

		int arr[n*k];

		for(auto &x:arr)
			cin >> x;

		int m=n/2;
		
		int i=0;
		int j=n*k-1;
		int c=0;
		int c2=k;
		ll sum=0;
		while(c2!=0)
		{
			if(c==m)
			{
				sum+=arr[j];
				c=0;
				c2--;
			}
			else c++;
			j--;
		}

		cout << sum << "\n";
	}
	return 0;
}
