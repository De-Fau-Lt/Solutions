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
        m[x] = i;
    }

    int s = m.begin()->second;
    int val = m.begin()->first;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second < s)
        {
            s = it->second;
            val = it->first;
        }
    }
    cout << val;
}