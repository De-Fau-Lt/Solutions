#include <bits/stdc++.h>

using namespace std;

bool arePermutation(string a,string b)
{

	auto it = a.begin();
	for(int i=0;i<a.size();i++)
	{
		if(a[i] == ' ')
			a.erase(it);
		it++;
	}
	it = b.begin();
	for(int i=0;i<b.size();i++)
	{
		if(b[i] == ' ')
			b.erase(it);
		it++;
	}

	if(a.size() != b.size())
		return false;

	int count[256] = {0};
	int count2[256] = {0};
	int i=0;

	while(a[i]&&b[i])
	{
		count[a[i]]++;
		count2[b[i]]++;
		i++;
	}

	for(i=0;i<256;i++)
	{
		if(count[i] != count2[i])
			return false;
	}
	return true;
}

int main()
{
	string str1,str2;
	getline(cin, str1);
	getline(cin,str2);
	

	cout << arePermutation(str1,str2) << endl;
	return 0;
}
