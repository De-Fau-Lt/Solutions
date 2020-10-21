#include <bits/stdc++.h>
#define Pi 3.141592653589793

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (auto &x : arr)
        scanf("%d", &x);

    sort(arr, arr + n, greater<int>());

    double ara = 0;
    double arb = 0;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            arb += (Pi * (arr[i] * arr[i]));
        }
        else
        {
            ara += (Pi * (arr[i] * arr[i]));
        }
    }

    printf("%.10f", abs(arb - ara));
}
