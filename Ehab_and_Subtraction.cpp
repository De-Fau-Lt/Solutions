#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    set<ll> st;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    auto it = st.begin();
    for (int i = 0; i < k; i++)
    {
        if (i == 0)
            cout << *it << endl;
        else if (next(it) == st.end())
            cout << 0 << endl;
        else
        {
            cout << *next(it) - *it << endl;
            it++;
        }
    }
}