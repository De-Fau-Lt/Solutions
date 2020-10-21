#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n, m;
    ll ma = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        ll mi = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            ll x;
            scanf("%lld", &x);
            mi = min(x, mi);
        }
        ma = max(ma, mi);
    }
    printf("%lld", ma);
}