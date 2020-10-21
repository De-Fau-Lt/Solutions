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

        string s;
        cin >> s;

        int c = count(s.begin(), s.end(), '1');
        if (c == 0)
            cout << n << endl;
        else
        {

            int d = 0;
            int d1 = n - 1;
            int m = INT_MAX;

            while (s[d] != '1')
                d++;
            while (s[d1] != '1')
                d1--;

            d1 = (n - 1) - d1;

            m = min(d, d1);

            cout << (n * 2) - (m * 2) << endl;
        }
    }
}