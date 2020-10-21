#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n;
    cin >> n;

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int f = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > 2)
        {
            f = 1;
            cout << "NO";
            break;
        }
    }
    if (f == 0)
    {
        cout << "YES" << endl;
        vector<int> r;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            r.push_back(it->first);
            it->second--;
        }
        cout << r.size() << endl;
        for (int i = 0; i < r.size(); i++)
        {
            cout << r[i];
            if (i != r.size() - 1)
                cout << " ";
        }
        cout << endl;
        r.clear();

        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second != 0)
                r.push_back(it->first);
        }

        if (r.empty())
        {
            cout << 0;
            cout << endl;
            cout << endl;
        }
        else
        {
            cout << r.size() << endl;

            for (int i = r.size() - 1; i >= 0; i--)
            {
                cout << r[i];
                if (i != 0)
                    cout << " ";
            }
        }
    }
}