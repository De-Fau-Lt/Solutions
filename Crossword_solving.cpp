#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    string s, t;
    cin >> s >> t;

    int mi = INT_MAX;
    int cnt = 0;
    vector<int> vec;
    vector<int> vec1;
    for (int i = 0; i <= m - n; i++)
    {
        vec.clear();
        int j = 0;
        cnt = 0;
        while (j < n)
        {
            if (t[j + i] != s[j])
            {
                cnt++;
                vec.push_back(j + 1);
            }
            j++;
        }

        if (mi > cnt)
        {
            vec1 = vec;
            mi = cnt;
        }
    }

    printf("%d\n", mi);

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i];
        if (i != vec1.size() - 1)
            cout << " ";
    }
}