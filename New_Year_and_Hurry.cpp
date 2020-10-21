#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int i = 1;
    int c = 0;
    while (k + (5 * i) <= 240)
    {
        k += 5 * i;
        if (i == n)
        {
            c = 1;
            break;
        }
        i++;
    }
    if (c == 1)
        cout << n;
    else
        cout << i - 1;
}