#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int arr[n];
    int sum = 0;
    for (auto &x : arr)
    {
        scanf("%d", &x);
        sum += x;
    }

    int f = arr[0];

    sort(arr + 1, arr + n);

    int i = n - 1;
    int cnt = 0;
    while ((f * a) / sum < b)
    {
        sum -= arr[i--];
        cnt++;
    }

    printf("%d", cnt);
}