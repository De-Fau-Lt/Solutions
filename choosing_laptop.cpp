#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int s[101], r[101], h[101], c[101];
    bool b[n] = {false};

    for (int i = 0; i < n; i++)
        cin >> s[i] >> r[i] >> h[i] >> c[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (s[i] < s[j] && r[i] < r[j] && h[i] < h[j])
                    b[i] = true;
            }
        }
    }

    int i = 0;
    int mi = INT_MAX;
    int in = 0;
    while (i < n)
    {
        if (b[i] == false)
        {
            if (mi > c[i])
            {
                mi = c[i];
                in = i;
            }
        }
        i++;
    }

    cout << in + 1;
}