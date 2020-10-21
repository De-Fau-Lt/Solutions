#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int m = INT_MAX;
    m = min(k - 1, n - k);
    cout << n * 3 + m;
}