#include <bits/stdc++.h>

using namespace std;

int solve(int n)
{
    if (n < 2)
        return 1;

    return solve(n - 1) + solve(n - 2);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", solve(n));

    /*int a = 1;
    int b = 1;

    int i = 2;
    int c = 1;
    while (i <= n)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }

    cout << c;*/
}
