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

    if (m.size() != 2)
        cout << "NO";

    else
    {
        auto it = m.begin();
        auto st = next(it);
        if (it->second == st->second)
        {
            cout << "YES\n";
            cout << it->first << " " << st->first;
        }
        else
            cout << "NO";
    }
}