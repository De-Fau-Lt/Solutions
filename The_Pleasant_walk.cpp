#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (auto &x : arr)
        scanf("%d", &x);

    int i = 1;

    int ma = 0;
    while (i < n)
    {
        int cnt = 0;
        while (arr[i] != arr[i - 1] && i < n)
        {
            i++;
            cnt++;
        }
        ma = max(ma, cnt);
        i++;
    }
    printf("%d", ma + 1);
}