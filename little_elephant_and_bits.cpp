#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	
	int f=0;
	string s2;
	for(auto x:s)
	{
		if(x=='0' && f==0)
		{
			f=1;
			continue;
		}
		s2+=x;
	}
	if(f!=1)
		s2.erase(--s2.end());

	cout << s2 << endl;
}
