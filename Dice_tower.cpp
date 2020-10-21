#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        ll q = x / 14;
        ll r = x % 14;

        if (q > 0 && (r <= 6 && r >= 1))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}