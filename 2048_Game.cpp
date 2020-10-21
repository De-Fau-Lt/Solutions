#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= 2048)
                m[x]++;
        }

        int sum = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            sum += (it->first * it->second);
        }

        if (sum >= 2048)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}