#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    
    int x[n];
    for(auto &i:x)
        scanf("%d",&i);

    sort(x,x+n);
    
    int q;
    scanf("%d",&q);

    for(int i=0;i<q;i++)
    {
        /*ll x;
        ll sum=0;
        scanf("%lld",&x);
        for(int j=0;j<n;j++)
        {
            if(x >= arr[j])
            {
                sum++;
            }
        }
        printf("%lld\n",sum);*/

        ll m;
        scanf("%lld",&m);

        if(m<x[0])
        {
            cout << 0 << endl;
        }
        else if(m>=x[n-1])
        {
            cout << n << endl;
        }
        else
        {
        
            int j=0;
            int k=n-1;

            int mid=0;
            int c=0;
            while(j<k)
            {
                mid= j+(k-j)/2;
                if(m >= x[mid])
                    j = mid+1;
                else
                    k = mid;
            }
            printf("%d\n",j);
        }
    }
}