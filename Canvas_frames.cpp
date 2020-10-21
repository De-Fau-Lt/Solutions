#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    int sum = 0;
    for (auto it = m.begin(); it != m.end(); it++)
        sum += it->second / 2;

    cout << sum / 2;
}