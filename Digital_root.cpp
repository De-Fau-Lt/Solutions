#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        ll k, x;
        cin >> k >> x;

        cout << 9 * (k - 1) + x << endl;
    }
}