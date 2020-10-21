#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];

    for (auto &x : arr)
        cin >> x;

    sort(arr, arr + n);

    ll c = 0;
    ll i = 0;
    while (arr[i] == 1)
        i++;
    
    for(int j=0;j<n;j++)
    {
        
    }
}