#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (s.size() > 26)
        cout << -1;
    else
    {
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }
        cout << s.size() - st.size();
    }
}