#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	scanf("%d",&n);
	
	int arr[n];

	for(auto &x:arr)
		scanf("%d",&x);

	if(n==1)
	{
		if(arr[0]==15)
			printf("DOWN\n");
		else if(arr[0]==0)
			printf("UP\n");
		else
			printf("%d\n",-1);

		return 0;
	}
	
	if(arr[n-1] < arr[n-2] && arr[n-1] != 0 || arr[n-1] == 15)
		printf("DOWN\n");
	else
		printf("UP\n");

	return 0;
}
