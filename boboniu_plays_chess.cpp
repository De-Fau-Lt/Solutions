#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pairs;

int main()
{
	int n,m,Sx,Sy;
	scanf("%d %d %d %d",&n,&m,&Sx,&Sy);

	set<pairs> st;
	
	pairs x = make_pair(Sx,Sy);
	st.insert(x);
	cout << Sx << " " << Sy << "\n";

	while(Sx!= 1 || Sy!=1)
	{
		if(Sx!=1)
			Sx--;
		else
			Sy--;

		x = make_pair(Sx,Sy);
		st.insert(x);
		cout << Sx << " " << Sy << "\n";
	}
	
	int a=n,b = 1;
	if(n&1)
		b=m;

	int i=1;
	int f=0;
	while(Sx != a || Sy != b)
	{
		if(Sy!=m && i&1 || f==1 && i&1)
		{
			Sy++;
			f=0;
		}
		else if(Sy!=1 && !(i&1) || f==1 && !(i&1))
		{
			Sy--;
			f=0;
		}
		else if(Sy==m || Sy==1)
		{
			Sx++;
			i++;
			f=1;
			x = make_pair(Sx,Sy);
			if(st.count(x) == 0)
				cout << Sx << " " << Sy << "\n";
		}
		x = make_pair(Sx,Sy);
		if(st.count(x)==0 && f==0)
			cout << Sx << " " << Sy << "\n";
	}

}
