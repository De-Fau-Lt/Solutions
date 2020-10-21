#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(auto &x:arr)
        cin >> x;
    sort(arr,arr+n);

    int i=0;
    ll sum=0;
    int j=n-1;
    int c=0;
    while(i<=j)
    {

        if(i!=j)
        {
            if(arr[i]+arr[j] == 4)
            {
                c++;
                i++;
                j--;
            }
            else if(arr[i]+arr[j] > 4)
            {
                c++;
                j--;
            }
            else
            {
                sum = arr[j];
                while(sum<4)
                {
                    sum+=arr[i++];
                }
                if(sum>4)
                    i--;
                c++;
                j--;
                sum=0;
            }
        }
        if(i==j)
        {
            c++;
            i++;
            j--;
        }
    }
    cout << c;
}