#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
	
		int k=0;
		int l=n-1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((i == n/2 || i==n/2-1 || i==n/2+1) && (j==n/2 || j==n/2-1 || j==n/2+1) && n&1)
					cout << 1 << " ";
				else if((i == n/2 || i == n/2-1) && (j==n/2 || j == n/2-1) && !(n&1))
					cout << 1 << " ";
				else
				{
					if(j==k || j==l)
						cout << 1 << " ";
					else
						cout << 0 << " ";
				}
			}
			cout << endl;
			k++;
			l--;
		}
	}
	return 0;
}
