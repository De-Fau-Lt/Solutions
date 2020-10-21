#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll gcd(ll x, ll y)
{
    while (y != 0)
    {
        x %= y;
        swap(x, y);
    }

    return x;
}

int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    ll z = gcd(x, y);
    x /= z;
    y /= z;

    /*ll i = 1;
    while (x * i <= a && y * i <= b)
        i++;

    cout << i - 1;*/
    cout << min(a / x, b / y);
}