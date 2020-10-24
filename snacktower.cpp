#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	
	set<int,greater<int>> st;
	int n2=n;
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);

		if(n2 == x)
		{
			cout << n2--;
			auto it=st.begin();
			while(*it == n2 && !st.empty())
			{
				cout << " " << n2--;
				it++;
				st.erase(st.begin());
			}
			cout << "\n";

		}

		else
		{
			cout << "\n";
			st.insert(x);
		}
	}
	return 0;
}
