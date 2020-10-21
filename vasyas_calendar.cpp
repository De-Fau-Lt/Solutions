#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int d, n;

    cin >> d >> n;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i != n - 1)
            sum += (d - x);
    }

    cout << sum;
}
