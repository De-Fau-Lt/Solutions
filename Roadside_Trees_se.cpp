#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev = 0;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        r += abs(prev - x) + 2;
        prev = x;
    }
    cout << r - 1;
}