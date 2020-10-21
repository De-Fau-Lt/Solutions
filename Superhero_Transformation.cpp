#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    unordered_set<char> vow = {'a', 'e', 'i', 'o', 'u'};

    if (s.size() != t.size())
        cout << "NO";
    else
    {
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int x = vow.count(s[i]);
            int y = vow.count(t[i]);
            if (x ^ y)
            {
                c = 1;
                cout << "NO";
                break;
            }
        }
        if (c == 0)
            cout << "YES";
    }
}