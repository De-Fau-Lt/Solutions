#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		int a[n];
		int b[n];

		for(auto &x:a)
			cin >> x;
		for(auto &x:b)
			cin >> x;

		int c[2]={0,0};
		
		int f=0;
		for(int i=0;i<n;i++)
		{
			if(a[i] > b[i] && !c[1])
			{
				cout << "NO";
				f=1;
				break;
			}
			if(a[i] < b[i] && !c[0])
			{
				cout << "NO";
				f=1;
				break;
			}

			if(a[i]==1)
				c[0]=1;
			if(a[i]==-1)
				c[1]=1;
		}

		if(f==0)
			cout << "YES";
		cout << "\n";
		
	}
}
