#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (cnt < 2)
        {
            s += 'a';
            cnt++;
        }
        else if (cnt < 4)
        {
            s += 'b';
            cnt++;
        }
        if (cnt == 4)
            cnt = 0;
    }
    cout << s;
}