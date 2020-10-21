#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    string n;
    cin >> n;

    if (n.size() == 1)
        cout << 0;
    else
    {
        ll c = 0;
        while (n.size() > 1)
        {
            ll x = 0;
            for (ll i = 0; i < n.size(); i++)
                x += n[i] - '0';
            n = to_string(x);
            c++;
        }
        cout << c;
    }
}