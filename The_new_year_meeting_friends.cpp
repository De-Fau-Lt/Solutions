#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3];
    for (auto &x : arr)
        cin >> x;

    sort(arr, arr + 3);

    cout << (arr[1] - arr[0]) + (arr[2] - arr[1]);
}