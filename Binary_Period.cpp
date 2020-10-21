#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;

	while(T--)
	{
		string t;
		cin >> t;

		unordered_set<int> st;

		for(auto x:t)
			st.insert(x);
		if(st.size()==1)
			cout << t;
		else
		{
			string t2;

			for(int i=0;i<t.size();i++)
			{
				if(i==t.size()-1)
				{
					t2+=t[i];
					break;
				}
				if(t[i]=='1' && t[i+1]=='1')
					t2+="10";
				else if(t[i]=='0' && t[i+1]=='0')
					t2+="01";
				else
					t2+=t[i];
			}
			cout << t2;
		}
		cout << endl;
	}
}
