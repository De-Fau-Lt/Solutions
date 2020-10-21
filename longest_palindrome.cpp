#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,m;
	scanf("%d %d",&n,&m);

	string s1,s2,p;
	set<string> st;
	string arr[n];

	for(int i=0;i<n;i++)
	{
		string x;
		cin >> x;
		st.insert(x);
	}

	for(int i=0;i<n;i++)
	{
		auto it=st.begin();
		string s=*it;
		string t = s;

		reverse(s.begin(),s.end());

		st.erase(it);
		auto it2 = st.find(s);
		if(!st.empty() && it2!=st.end())
		{
			s1+=t;
			s2 = *it2+s2;
		}
		else if(s==t)
		{
			p=t;
		}
	}
	
	s1+=p+s2;
	printf("%d\n",int(s1.size()));
	cout << s1 << endl;
}
