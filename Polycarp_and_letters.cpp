#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i = -1;
    int si = 0;
    while (i < n)
    {
        unordered_set<int> st;
        int j = i + 1;
        while (islower(s[j]))
            j++;

        for (int k = i + 1; k < j; k++)
            st.insert(s[k]);
        si = max(int(st.size()), si);
        i = j;
    }
    cout << si;
}