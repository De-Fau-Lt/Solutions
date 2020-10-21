#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        map<int, char> m;
        string result;

        for (int i = 0; i < s.size(); i++)
        {
            m[indices[i]] = s[i];
        }

        for (auto it = m.begin(); it != m.end(); it++)
        {
            result += it->second;
        }

        return result;
    }
};

int main()
{
    Solution s1;
    string s;
    cin >> s;

    vector<int> indices;
    for (int i = 0; i < s.size(); i++)
    {
        int n;
        cin >> n;
        indices.push_back(n);
    }
    cout << s1.restoreString(s, indices);
}