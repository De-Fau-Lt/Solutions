#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        unordered_set<char> s1;
        unordered_set<char> s2;

        for (auto x : s)
            s1.insert(x);
        for (auto x : t)
            s2.insert(x);

        int c = 0;
        for (auto it = s1.begin(); it != s1.end(); it++)
        {
            if (s2.count(*it) > 0)
            {
                c = 1;
                cout << "YES\n";
                break;
            }
        }
        if (c == 0)
            cout << "NO\n";
    }
}