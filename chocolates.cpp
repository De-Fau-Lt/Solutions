#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (auto &x : arr)
        cin >> x;

    ll sum = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        sum += arr[i + 1];
        if (arr[i] >= arr[i + 1])
        {
            if (arr[i + 1] == 0)
                arr[i] = 0;
            else
                arr[i] = (arr[i + 1] - 1);
        }
    }
    sum += arr[0];
    cout << sum;
}