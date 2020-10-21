#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;

    int c = 0;
    ll w, h;
    cin >> w >> h;
    int ph = max(w, h);
    for (ll i = 1; i < n; i++)
    {
        cin >> w >> h;
        if (ph >= h && ph >= w)
        {
            ph = max(h, w);
            continue;
        }
        if (ph < h)
            h = w;
        if (ph < h)
            c = 1;
        ph = h;
    }

    if (c)
        cout << "NO";
    else
        cout << "YES";
}