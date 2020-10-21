#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    vector<int> vec;
    for (auto &x : arr)
        scanf("%d", &x);

    int j = -1;
    int i = 0;
    while (i < n)
    {
        if (arr[i] >= j)
        {
            if (arr[i] - j > 1)
            {
                printf("%d", i + 1);
                return 0;
            }
            j = arr[i++];
        }
        else
            i++;
    }
    printf("%d", -1);
}