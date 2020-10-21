#include <bits/stdc++.h>

using namespace std;

int main()
{
    double d, t, s;
    cin >> d >> t >> s;

    double r = d / s;
    if (r <= t)
        cout << "Yes";
    else
        cout << "No";
}