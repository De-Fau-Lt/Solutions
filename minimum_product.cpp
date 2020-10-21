#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int a,b,x,y,n;
		cin >> a >> b >> x >> y >> n;
		
		int m=n;
		ll d1=a;
		ll d2=b;
		ll p1=0;
		ll p2=0;
		int n2=n;
		if(a-x >= n)
			d1=a-n;
		if(a-x < n)
		{
			d1 = a-(a-x);
			n-=(a-x);
		}

		if(n2 != n)
		{
			n2 = n;
			if(b - y >= n)
				d2=b-n;
			if(b-y < n)
				d2 = b-(b-y);
		}

		p1 = d1*d2;
		
		d1 = a;
		d2 = b;
		int m2=m;
		if(b-y >= m)
			d2 = b-m;
		if(b-y < m)
		{
			d2 = b-(b-y);
			m-=(b-y);
		}

		if(m2!=m)
		{
			m2=m;
			if(a-x>=m)
				d1 = a-m;
			if(a-x<m)
			{
				d1 = a-(a-x);
			}
		}
		p2 = d1*d2;

		cout << min(p1,p2) << endl;
	}
}
