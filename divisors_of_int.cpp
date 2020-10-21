#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	scanf("%d",&n);

	int arr[n];

	int x=0,y=0;
	for(auto &i:arr)
	{
		scanf("%d",&i);
		x = max(x,i);
	}

	unordered_set<int> st;
	vector<int> vec;
	for(auto i:arr)
	{
		if(x%i==0 && st.count(i)!=1)
			st.insert(i);
		else
			vec.push_back(i);
	}

	for(auto i:vec)
		y=max(i,y);

	printf("%d %d\n",x,y);
}
