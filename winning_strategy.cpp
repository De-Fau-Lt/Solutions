#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for(auto &x:arr)
            cin >> x;

        sort(arr,arr+n,greater<int>());

        if(n==1)
            cout << "first\n";
        else if(n==2)
        {
            if(arr[0] > arr[1])
                cout << "first\n";
            else if(arr[0]<arr[1])
                cout << "second\n";
            else
                cout << "draw\n";
            
        }
        else
        {
            ll s1=0,s2=0;
            s1=arr[0];
            s2=arr[1]+arr[2];

            for(int i=3;i<n;i++)
            {
                if(i&1)
                    s1+=arr[i];
                else
                    s2+=arr[i];
            }

            if(s1>s2)
                cout << "first\n";
            else if(s2 > s1)
                cout << "second\n";
            else
                cout << "draw\n";
        }
    }
    return 0;
}