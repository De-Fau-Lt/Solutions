#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		string s;
		cin >> s;

		int m=0;
		int n=0;
		s+="q";

		for(auto x:s)
		{
			if(x=='L')
				n++;
			else
			{
				m=max(m,n);
				n=0;
			}
		}
		cout << m+1 << "\n";
	}
}
