#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int l = 0;
    int in = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > l)
        {
            l = arr[i];
            in = i;
        }
    }

    int i = 0;
    bool r = true;
    bool r1 = true;

    while (i < in)
    {
        if (arr[i] >= arr[i + 1])
            r = false;
        i++;
    }
    while (in < n - 1)
    {
        if (arr[in] <= arr[in + 1])
            r1 = false;
        in++;
    }

    if (r && r1)
        cout << "YES";
    else
        cout << "NO";
}