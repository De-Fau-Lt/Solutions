#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n, k;
    scanf("%lld %lld", &n, &k);

    ll arr[k];
    for (auto &x : arr)
        scanf("%lld", &x);

    ll m = 9223372036854775807;
    ll b = 0;
    ll in = 0;

    for (ll i = 0; i < k; i++)
    {
        if (m > n % arr[i])
        {
            in = i + 1;
            b = n / arr[i];
            m = n % arr[i];
        }
    }
    printf("%lld %lld", in, b);
}