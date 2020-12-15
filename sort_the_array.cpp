/*
ID: prayagr1
TASK:
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	
	int arr[n];
	int arr2[n];

	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	
	int flag=0;
	sort(arr2,arr2+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i] != arr2[i]) flag = 1;
	}

	if(!flag)
	{
		cout << "yes\n";
		cout << 1 << " " << 1;
		return;
	}

	int s=0,e=0;
	int i=1;
	int f=0;
	int f2=0;
	while(true)
	{
		if(!f && i==n)
		{
			e=i-1;
			break;
		}
		if(f && i==n)
			break;
		if(f && arr[i] < arr[i-1])
		{
			cout << "no";
			return;
		}
		if(!f2 && arr[i] < arr[i-1] && !f) s=i-1,f2=1;
		if(f2 && !f && arr[i] > arr[i-1]) e=i-1,f=1;
		i++;
	}
	
	reverse(arr+s,arr+e+1);

	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr2[i])
		{
			cout << "no";
			return;
		}
	}

	s++,e++;
	cout << "yes\n";
	cout << s << " " << e;
}

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

		#ifndef ONLINE_JUDGE 
	//freopen("input.txt", "r", stdin); 
	//freopen("error.txt", "w", stderr); 
	//freopen("output.txt", "w", stdout);
  	#endif

	int t=1; 
	//*is Single Test case?*/cin>>t; 
	while(t--) 
	{ 
		solve(); 
		cout<<"\n";
	} 

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
}
