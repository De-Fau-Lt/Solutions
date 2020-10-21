#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        ll sum = 0;
        ll mi = 9223372036854775807;
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            sum += x;
            mi = min(mi, sum);
        }
        printf("%lld\n", abs(mi));
    }
}