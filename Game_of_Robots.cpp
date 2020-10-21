#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int arr[n];
    for (auto &x : arr)
        scanf("%d", &x);

    int j = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += j++;
        if (k <= sum)
        {
            printf("%d", arr[i - (sum - k)]);
            return 0;
        }
    }
}