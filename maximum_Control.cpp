#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    unordered_map<int, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        scanf("%d", &x);
        m[x]++;
        scanf("%d", &x);
        m[x]++;
    }

    int cnt = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
            cnt++;
    }
    printf("%d", cnt);
}