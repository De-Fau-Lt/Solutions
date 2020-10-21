#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for (auto x : s)
        mp[x]++;

    int ans = 0;
    if ((mp['L'] == 0 ^ mp['R'] == 0) && (mp['U'] == 0 ^ mp['D'] == 0))
    {
        cout << 0;
        return 0;
    }

    ans = min(mp['L'], mp['R']);
    ans += min(mp['D'], mp['U']);

    cout << ans * 2;
}