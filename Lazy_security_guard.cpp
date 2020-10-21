#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = sqrt(n);
    int s1 = s;
    while (s1 * s < n)
    {
        if (s1 < s)
            s1++;
        else
            s++;
    }
    cout << 2 * (s1 + s);
}