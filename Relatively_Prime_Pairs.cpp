#include <bits/stdc++.h>
#define ll long long

using namespace std;

/*int gcd(ll x, ll y)
{
    while (y != 0)
    {
        x %= y;
        swap(x, y);
    }
    return x;
}*/

int main()
{
    ll l, r;
    cin >> l >> r;
    unordered_map<ll, ll> m;
    ll c = 0;
    for (ll i = l; i <= r; i += 2)
    {
        m[i] = i + 1;
        if (m.size() == ((r - l) + 1) / 2)
            break;
    }

    if (m.size() < ((r - l) + 1) / 2)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        for (auto it = m.begin(); it != m.end(); it++)
            cout
                << it->first << " " << it->second << endl;
    }

    /*ll c = 0;
    for (ll i = l; i <= r; i++)
    {
        for (ll j = l; j <= r; j++)
        {
            if (i != j)
            {
                ll r = gcd(i, j);
                if (r == 1)
                    m[i] = j;
            }
            if (m.size() == ((r - l) + 1) / 2)
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
            break;
    }
    if (c == 1)
    {
        cout << "YES\n";
        for (auto it = m.begin(); it != m.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        }
    }
    else
        cout << "NO\n";*/
}