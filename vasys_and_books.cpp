#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> m;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        m[x] = i;
    }

    int prev = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (m[x] > prev)
        {
            printf("%d", abs(m[x] - prev));
            if (i != n - 1)
                printf(" ");
        }
        else
        {
            printf("%d", 0);
            if (i != n - 1)
                printf(" ");
        }
        prev = max(m[x], prev);
    }
}