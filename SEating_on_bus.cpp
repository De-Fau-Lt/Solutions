#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int l = 4 * n;
    int l2 = l / 2;

    int i = 1;
    int j = l2 + 1;
    int cnt = 0;
    while (j <= m && i <= l2)
    {
        if (cnt & 1)
        {
            cout << i++;
            //if (i != l2)
            cout << " ";
        }

        else
            cout << j++ << " ";
        cnt++;
    }
    if (m < 2 * n)
    {
        while (i <= m)
        {
            cout << i++;
            //if (i != l2)
            cout << " ";
        }
    }
    else
    {
        while (i <= l2)
        {
            cout << i++;
            //if (i != l2)
            cout << " ";
        }
    }
}