#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = count(s.begin(), s.end(), 'I');

    if (cnt == 1 && s.size() != cnt)
    {
        cout << cnt;
        return 0;
    }
    else if (cnt > 1)
    {
        cout << 0;
        return 0;
    }
    else
    {
        cnt = count(s.begin(), s.end(), 'A');
        cout << cnt;
    }
}