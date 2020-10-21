#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    int c=0;
    ll sum=0;
    int z=0;
    for(auto &x:arr)
    {
        scanf("%d",&x);
        if(abs(x)!=1)
            sum+=abs(abs(x)-1);
        if(x<0)
            c++;
        if(x==0)
            z++;
    }
    if(c&1 && z==0)
        sum+=2;
    
    printf("%lld",sum);
}