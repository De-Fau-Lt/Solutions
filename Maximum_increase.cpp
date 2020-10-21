#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(auto &x:arr)
        cin >> x;
    
    int ma = 0;
    int c =0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            ma = max(ma,c);
            c=0;
        }
        else
            c++;
    }
    ma=max(ma,c);

    printf("%d",ma+1);
}