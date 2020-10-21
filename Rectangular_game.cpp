#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int m = n;

    int sum = 0;
    while (n > 1)
    {
        if (!(n & 1))
        {
            int x = n / 2;
            sum += x;
            n = x;
        }
        else
        {
            int ma = 0;
            for (int i = n / 2; i >= 0; i--)
            {
                if (n % i == 0)
                {
                    ma = i;
                    break;
                }
            }

            sum += ma;
            n = ma;
        }
    }
    printf("%d", m + sum);
}