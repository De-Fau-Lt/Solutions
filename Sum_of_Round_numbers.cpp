#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int k = s.size() - 1;
        int cnt = 0;
        int sum = 0;
        for (auto x : s)
        {
            if (x != '0')
                sum++;
        }
        cout << sum << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '0')
            {
                string st;
                st = s[i];
                for (int j = k; j > 0; j--)
                    st += '0';
                cout << st << " ";
                cnt++;
            }
            k--;
        }
        cout << endl;
    }
}