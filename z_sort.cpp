#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (auto &x : arr)
        cin >> x;

    sort(arr, arr + n);

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        cout << arr[i] << " ";
        cout << arr[j];
        if (j - 1 != i)
            cout << " ";
        i++;
        j--;
    }
    if (n & 1)
        cout << arr[i];
}