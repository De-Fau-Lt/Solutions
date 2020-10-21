#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    scanf("%d", &n);

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a, x;
        scanf("%d %d", &a, &x);
        mp[a] = x;
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int a, x;
        scanf("%d %d", &a, &x);
        if (mp[a] < x)
            mp[a] = x;
    }

    ll sum = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
        sum += it->second;
    printf("%lld", sum);
}