#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n, k;
    scanf("%lld %lld", &n, &k);

    if (k <= n)
    {
        cout << (k - 1) / 2;
        return 0;
    }

    ll z = 0;
    ll mi = k - n;
    ll ma = n;

    cout << max(z, (ma - mi + 1) / 2);
}