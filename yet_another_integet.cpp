#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (b > a)
            swap(a, b);

        ll ans = a - b;

        if (ans % 10 == 0)
            cout << ans / 10 << endl;
        else
        {
            cout << (ans / 10) + 1 << endl;
        }
    }
}