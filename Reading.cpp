#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, k;
    scanf("%d %d", &n, &k);

    multimap<int, int, greater<int>> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        m.insert({x, i});
    }
    int i = 0;
    vector<int> vec;
    int mi = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (i == k)
            break;
        vec.push_back(it->second + 1);
        if (i + 1 == k)
            mi = it->first;
        i++;
    }

    printf("%d\n", mi);
    for (int i = 0; i < vec.size(); i++)
    {
        printf("%d", vec[i]);
        if (i != vec.size() - 1)
            cout << " ";
    }
    return 0;
}