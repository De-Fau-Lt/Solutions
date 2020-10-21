#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<char, int> m;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            for (auto x : s)
                m[x]++;
        }

        int c = 0;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second % n != 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}