#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string r;

    unordered_map<char, int> mp;

    for (auto x : s)
    {
        if (x == '4' || x == '7')
            mp[x]++;
    }

    if (mp.empty())
    {
        cout << -1;
        return 0;
    }

    if (mp['4'] >= mp['7'])
        cout << 4;
    else
        cout << 7;
}