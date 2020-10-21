#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int T;
	cin >> T;

	while(T--)
	{
		int n,x;
		cin >> n >> x;

		int arr[n];
		
		ll  sum=0;
		for(auto &a:arr)
		{
			cin >> a;
			sum+=a;
		}

		if(floor(sum/n) >= x)
			cout << n;
		else
		{
			sort(arr,arr+n);
			int d = n;
			int i=0;
			while(floor(sum/d)<x && i<n-1)
			{
				sum-=arr[i++];
				d--;
			}

			if(floor(sum/d)>=x)
				cout << d;
			else
				cout << 0;
		}
		cout << "\n";
	}
}
