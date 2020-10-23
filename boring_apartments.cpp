#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string x;
		cin >> x;
		int y = x[0] - '0';
		int r=0;

		if(x.size()==1)
			r=9;
		else if(x.size()==2)
			r=7;
		else if(x.size()==3)
			r =4;

		cout << 10*y-r << endl;
	}
}
